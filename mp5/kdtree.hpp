/**
 * @file kdtree.cpp
 * Implementation of KDTree class.
 */

#include <utility>
#include <algorithm>

using namespace std;
/**Determines if a Point is smaller
 * than another Point in a specified
 * dimension**/
template <int Dim>
bool KDTree<Dim>::smallerDimVal(const Point<Dim>& first,
                                const Point<Dim>& second, int curDim) const
{
    /**
     * @todo Implement this function!
     */
	if(first[curDim] < second[curDim]){
		return true;
	}

	if(first[curDim] == second[curDim] && first < second){
		return true;
	}

	else{
    	return false;
	}
}
/**Determines if a Point is closer to
 * the target Point than another reference
 * Point by calculating the Euclidean distance
 * between Points**/
template <int Dim>
bool KDTree<Dim>::shouldReplace(const Point<Dim>& target,
                                const Point<Dim>& currentBest,
                                const Point<Dim>& potential) const
{
    /**
     * @todo Implement this function!
     */
	 double distance_best = 0.0;
	 double distance_potential = 0.0;

	 for(int x = 0; x < Dim; x++){
			distance_best += (currentBest[x] - target[x])*(currentBest[x] - target[x]);
			distance_potential += (potential[x] - target[x])*(potential[x] - target[x]);
	 }

	 if(distance_potential < distance_best){

			return true;
	 }

	 if(distance_potential == distance_best && potential < currentBest){
	
			return true;
	 }

	 else{
     	
			return false;
	 }
}
/**Constructor for KDTree. Constructs
 * a KDTree from the set of points
 * passed in**/
template <int Dim>
KDTree<Dim>::KDTree(const vector<Point<Dim>>& newPoints)
{
    /**
     * @todo Implement this function!
     */
	points = newPoints;
	size = newPoints.size();
	root = NULL;

	if(newPoints.empty() == true){
		root = NULL;
		return;
	}
	
	if(newPoints.size() == 1){
		*root = newPoints[0];
	}

	kdtree_helper(root, points, 0, points.size()-1, 0);
}
/**Copy constructor for KDTree**/
template <int Dim>
KDTree<Dim>::KDTree(const KDTree<Dim>& other) {
  /**
   * @todo Implement this function!
   */
    destroy(root);
	root = copy(other.root);
}
/**Assignment operator used by KDTree**/
template <int Dim>
const KDTree<Dim>& KDTree<Dim>::operator=(const KDTree<Dim>& rhs) {
  /**
   * @todo Implement this function!
   */ 
  if(this != rhs){
	
		destroy(root);
		root = copy(rhs.root);
  }

  return *this;
}
/**Destructor for KDTree**/
template <int Dim>
KDTree<Dim>::~KDTree() {
  /**
   * @todo Implement this function!
   */

	destroy();
}

/**Finds the nearest neighboring Point to 
 * the parameter point in the KDTree**/
template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    /**
     * @todo Implement this function!
     */
	int left = 0;
	int right = points.size()-1;
	double distance = 0;
	bool first = true;
	Point<Dim> currentBest;
	findNearestNeighbor_helper(query, currentBest, left, right, 0, distance, first);

	return currentBest;

}

/**Helper function for KDTree constructor.
 * Finds the median index and creates the nodes
 * through recursive calls. Nodes placed through
 * the quickselect algorithm**/
template <int Dim>
void KDTree<Dim>::kdtree_helper(KDTreeNode*& root, vector<Point<Dim>>& list, int left, int right, int dimension){

	int median = (left + ( (right-left) / 2 ) );
	

	root = new KDTreeNode(quick_select(list, left, right, median, dimension));

	if(left <= median - 1){

		kdtree_helper(root->left, list, left, median-1, (dimension+1) % Dim);
	}
	
	if(right >= median + 1){

		kdtree_helper(root->right, list, median + 1, right, (dimension+1) % Dim);
	} 
	
}
/**Quickselect algorithm. Finds the smallest
 * partition index given a list of points**/
template <int Dim>
Point<Dim> KDTree<Dim>::quick_select(vector<Point<Dim>>& list, int left, int right, int k, int dimension){

	if(left == right){

		return list[left];
	}

	int pIndex = left;// + std::floor(rand() % (right - left + 1));

	pIndex = partition(list, left, right, pIndex, dimension);

	if(k == pIndex){

		return list[k];
	}

	else if(k < pIndex){

		return quick_select(list, left, pIndex-1, k, dimension);
	}

	else{

		return quick_select(list, pIndex+1, right, k, dimension);
	}

	
}
/**Finds the index to partition at in the 
 * given list. **/
template <int Dim>
int KDTree<Dim>::partition(vector<Point<Dim>>& list, int left, int right, int pIndex, int dimension){


		Point<Dim> pivot = list[pIndex];

		std::swap(list[pIndex], list[right]);

		int store_index = left;
		int i;

		for(i = left; i < right; i++){

			if(smallerDimVal(list[i], pivot, dimension) == true){
			
				std::swap(list[i], list[store_index]);
				store_index++;
			}
		}

		std::swap(list[store_index],list[right]);
		return store_index;	


}
/**Nearest neighbor helper function.
 * Compares the parameter point to fellow
 * neighboring points to find the best match**/
template <int Dim>
void  KDTree<Dim>::findNearestNeighbor_helper(const Point<Dim>& query, Point<Dim>& currentBest, int left, int right, int dimension, double& distance, bool& first) const{

	if(left >= right){
		if(first){
			first = false;
			currentBest = points[left];
		}

		else{
			if(shouldReplace(query, currentBest, points[left])){
				currentBest = points[left];
			}
		}
		return;
	}

	int mid_index = (left + right)/2;
	
	if(smallerDimVal(query, points[mid_index], dimension)){
		findNearestNeighbor_helper(query, currentBest, left, mid_index - 1, (dimension + 1) % Dim, distance, first);
		if(shouldReplace(query, currentBest, points[mid_index])){
			currentBest = points[mid_index];
		}
	
		distance = cal_distance(currentBest, query);
		
		if((query[dimension] - points[mid_index][dimension]) * (query[dimension] - points[mid_index][dimension]) <= distance){
			findNearestNeighbor_helper(query, currentBest, mid_index + 1, right, (dimension + 1) % Dim, distance, first);
		}
	}

	else{

		findNearestNeighbor_helper(query, currentBest, mid_index + 1, right, (dimension + 1) % Dim, distance, first);
		if(shouldReplace(query, currentBest, points[mid_index])){
			currentBest = points[mid_index];
		}
		distance = cal_distance(currentBest, query);
		if((query[dimension] - points[mid_index][dimension]) * (query[dimension] - points[mid_index][dimension]) <= distance){
			findNearestNeighbor_helper(query, currentBest, left, mid_index - 1, (dimension + 1) % Dim, distance, first);
		}
	}
	return;
	
}

/**Calculates the distance between two
 * parameter Points. Used in neighbor helper
 * function**/
template <int Dim>
double KDTree<Dim>::cal_distance(const Point<Dim>& point1, const Point<Dim>& point2) const{

		double distance = 0;
		for(int i = 0; i < Dim; i++){

			distance += (point1[i] - point2[i]) * (point1[i] - point2[i]);
		}
		return distance;
}
/**Helper function for KDTree
 * destructor**/
template <int Dim>
void KDTree<Dim>::destroy(){
	if(root != nullptr){

		destroy(root);
		root = nullptr;
	}
}
/**Helper function for copy
 * constructor of KDTree**/
template <int Dim>
typename KDTree<Dim>::KDTreeNode* KDTree<Dim>::copy(const KDTreeNode*& node){
	if(node == nullptr){

		return nullptr;
	}

	KDTreeNode* new_node = new KDTreeNode(*node);
	return new_node;
}
/**Secondary helper function for
 * KDTree destructor**/
template <int Dim>
void KDTree<Dim>::destroy(KDTreeNode* node){

	if(node != NULL){
		destroy(node->left);
		destroy(node->right);
		delete node;
	}
}

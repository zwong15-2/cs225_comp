/**
 * @file kdtree.cpp
 * Implementation of KDTree class.
 */

#include <utility>
#include <algorithm>

using namespace std;

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
			distance_best += pow(currentBest[x] - target[x], 2);
			distance_potential += pow(potential[x] - target[x], 2);
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

template <int Dim>
KDTree<Dim>::KDTree(const vector<Point<Dim>>& newPoints)
{
    /**
     * @todo Implement this function!
     */
	points = newPoints;
	size = newPoints.size();

	if(newPoints.empty() == true){
		return;
	}
	
	if(newPoints.size() == 1){
		*root = newPoints[0];
	}

	kdtree_helper(root, points, 0, points.size()-1, 0);
}

template <int Dim>
KDTree<Dim>::KDTree(const KDTree<Dim>& other) {
  /**
   * @todo Implement this function!
   */

	//Nothing...yet
}

template <int Dim>
const KDTree<Dim>& KDTree<Dim>::operator=(const KDTree<Dim>& rhs) {
  /**
   * @todo Implement this function!
   */ 


  return *this;
}

template <int Dim>
KDTree<Dim>::~KDTree() {
  /**
   * @todo Implement this function!
   */

	//Nothing...yet
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    /**
     * @todo Implement this function!
     */
	int left = 0;
	int right = points.size()-1;
	int min_distance = 0;
	bool first = true;
	Point<Dim> currentBest;
	findNearestNeighbor_helper(query, currentBest, left, right, 0, min_distance, first);

	return currentBest;
}

template <int Dim>
void KDTree<Dim>::kdtree_helper(KDTreeNode*& root, vector<Point<Dim>>& list, int left, int right, int dimension){

	int median = std::floor(left + ( (right-left) / 2 ) );

/*	if(root == NULL){
		return;
	}*/

	root = new KDTreeNode(quick_select(list, left, right, median, dimension));

	if(left <= median - 1){

		kdtree_helper(root->left, list, left, median-1, (dimension+1) % Dim);
	}
	
	if(right >= median + 1){

		kdtree_helper(root->right, list, median + 1, right, (dimension+1) % Dim);
	} 
	
}

template <int Dim>
Point<Dim> KDTree<Dim>::quick_select(vector<Point<Dim>>& list, int left, int right, int k, int dimension){

	/*if(left == right){
		return list[left];
	}

	int mid_idx = partition(list, left, right);

	int length = mid_idx - left + 1;

	if(length == k){
	
		return list[mid_idx];
	}

	else if(k < length){

		return quick_select(list, left, mid_idx-1, k, dimension);
	}

	else{

		return quick_select(list, mid_idx+1, right, k - length, dimension);
	}*/

/*	if(k > 0 && k <= (right-left+1)){
		int index;
		index = partition(list, left, right, dimension);
		if( (index-left) == (k-1)){
			return list[index];
		}

		if( (index-left) > k - 1){
			return quick_select(list, left, index-1, k, dimension);
		}

		return quick_select(list, index+1, right, k-index+left-1, dimension);
	}

	return list[list.size()-1];*/

	if(left == right){

		return list[left];
	}

	int pIndex = left + std::floor(rand() % (right - left + 1));

	pIndex = partition(list, left, right, pIndex, dimension);

	if(k == pIndex){

		return list[k];
	}

	else if(k < pIndex){

		return quick_select(list, left, pIndex, k, dimension);
	}

	else{

		return quick_select(list, pIndex, right, k, dimension);
	}

	
}

template <int Dim>
int KDTree<Dim>::partition(vector<Point<Dim>>& list, int left, int right, int pIndex, int dimension){

	/*	Point<Dim> pivot = list[left];
		int left_ = left + 1;
		int right_ = right + 1;

		while(true){

			while(left_ < right && list[left_] < pivot){
				left_ +=1;
			}

			while(right_ > left && list[right_] > pivot){
				right_ -= 1;
			}

			if(left_ >= right_){
				break;
			}
		
			else{
				Point<Dim> temp = list[left_];
				list[left_] = list[right_];
				list[right_] = temp;
			}
		}
		Point <Dim> temp = list[left];
		list[left] = list[right_];
		list[right_] = temp;
		return right_;*/

	/*	Point<Dim> i = list[right];
		int x = left;
		
		for(int y = left; y <= right - 1; y++){

			if(smallerDimVal(list[y], i, dimension) == true){

				std::swap(list[x], list[y]);
				x++;
			}

		}
		
		std::swap(list[x], list[right]);
		return x;*/

		Point<Dim> pivot = list[pIndex];

		std::swap(list[pIndex], list[right]);

		int pindex = left;
		int i;

		for(i = left; i < right; i++){

			if(smallerDimVal(list[i], pivot, dimension) == true){
			
				std::swap(list[i], list[pindex]);
				pindex++;
			}
		}

		std::swap(list[pindex],list[right]);
		return pindex;	


}

template <int Dim>
void KDTree<Dim>::findNearestNeighbor_helper(const Point<Dim>& query, Point<Dim>& currentBest, int left, int right, int dimension, int min_distance, bool& first) const{

	if(left >= right){
		if(first){
			first = false;
			currentBest = points[right];
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
		findNearestNeighbor_helper(query, currentBest, left, mid_index - 1, (dimension + 1) % Dim, min_distance, first);
		if(shouldReplace(query, currentBest, points[mid_index])){
			currentBest = points[mid_index];
		}
	
		min_distance = cal_distance(currentBest, query);
		
		if((query[dimension] - points[mid_index][dimension]) * (query[dimension] - points[mid_index][dimension]) <= min_distance){
			findNearestNeighbor_helper(query, currentBest, mid_index + 1, right, (dimension + 1) % Dim, min_distance, first);
		}
	}

	else{

		findNearestNeighbor_helper(query, currentBest, mid_index + 1, right, (dimension + 1) % Dim, min_distance, first);
		if(shouldReplace(query, currentBest, points[mid_index])){
			currentBest = points[mid_index];
		}
		min_distance = cal_distance(currentBest, query);
		if((query[dimension] - points[mid_index][dimension]) * (query[dimension] - points[mid_index][dimension]) <= min_distance){
			findNearestNeighbor_helper(query, currentBest, left, mid_index - 1, (dimension + 1) % Dim, min_distance, first);
		}
	}
	return;
	
}

template <int Dim>
int KDTree<Dim>::cal_distance(const Point<Dim>& point1, const Point<Dim>& point2) const{

		double distance = 0;
		for(int i = 0; i < Dim; i++){

			distance += (point1[i] - point2[i]) * (point1[i] - point2[i]);
		}
		return distance;
}

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
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    /**
     * @todo Implement this function!
     */
/*	if(points.size() == 0){
	    return Point<Dim>();
	}

	int median_idx = (points.size()-1)/2;
	return findNearestNeighbor(query, points[median_idx], 0, points.size() - 1, 0);*/
	return Point<Dim>();
}

template <int Dim>
void KDTree<Dim>::kdtree_helper(KDTreeNode*& root, vector<Point<Dim>>& list, int left, int right, int dimension){

	int median = std::floor((points.size()-1)/2);

	if(root == NULL){
		return;
	}

	root = new KDTreeNode(quick_select(list, left, right, median, dimension));

	if(left < median - 1){

		kdtree_helper(root->left, list, left, median-1, (dimension+1) % Dim);
	}
	
	if(right > median + 1){

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

	int pIndex = left + rand() % (right - left + 1);

	pIndex = partition(list, left, right, pIndex, dimension);

	if(k == pIndex){

		return list[k];
	}

	else if(k < pIndex){

		return quick_select(list, left, pIndex-1, k, dimension);
	}

	else{

		return quick_select(list, pIndex + 1, right, k, dimension);
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
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query, Point<Dim> curr, int start_idx, int end_idx, int dimension){

	if(start_idx > end_idx){
		return curr;
	}

	if(start_idx == end_idx){
		if(shouldReplace(query, curr, points[start_idx])){
			curr = points[start_idx];
		}
		return curr;
	}

	else{
		int median_idx = (start_idx+end_idx)/2;
		int best_match = median_idx + 1, best_match2 = end_idx;
		int best_match_oppo = start_idx, best_match_oppo2 = median_idx - 1;

		if(smallerDimVal(query, points[median_idx], dimension)){

			std::swap(best_match, best_match_oppo);
			std::swap(best_match2, best_match_oppo2);
		}

		curr = findNearestNeighbor(query, curr, best_match2, best_match_oppo2, (dimension+1)%Dim);
		
		if(shouldReplace(query, curr, points[median_idx], dimension)){

			curr = points[median_idx];
		}
		return radius_small(query, curr, points[median_idx], dimension) ? findNearestNeighbor(query, curr, best_match_oppo, best_match_oppo2, (dimension+1)%Dim) : curr;;
	}

	return Point<Dim>();
}

template <int Dim>
bool KDTree<Dim>::radius_small(const Point<Dim>&target, const Point<Dim>& curr, const Point<Dim>& potential, int curr_dim) const{

		double curr_radius = 0;
		for(int x = 0; x < Dim; x++){

			curr_radius += pow(target[curr_dim] - curr[curr_dim], 2);
		}

		double radius = pow(potential[curr_dim] - target[curr_dim], 2);
		if(radius < curr_radius){
			return true;
		}

		if(radius == curr_radius && radius < curr_radius){

			return true;
		}

		else{
			
			return false;
		}
}

#include <iterator>
#include <cmath>
#include <algorithm>

#include <list>
#include <queue>
#include <stack>
#include <vector>

#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"
#include "DFS.h"



//using namespace std;


/**
 * Initializes a depth-first ImageTraversal on a given `png` image,
 * starting at `start`, and with a given `tolerance`.
 * 
 * @param png The image this DFS is going to traverse
 * @param start The start point of this DFS
 * @param tolerance If the current point is too different (difference larger than tolerance) with the start point,
 * it will not be included in this DFS
 */
DFS::DFS(const PNG & png, const Point & start, double tolerance) {  
  /** @todo [Part 1] */
	png_height = png.height();
	png_width = png.width();
	starting_point = start;
	val = false;
	check_tolerance = tolerance;
	image = png;

	for(int i = 0; i < png_width; i++){
		visited.push_back(std::vector<bool>(png_height, val));
	}

	png_visit.push(start);
	

}

/**
 * Returns an iterator for the traversal starting at the first point.
 */
ImageTraversal::Iterator DFS::begin() {
  /** @todo [Part 1] */
  DFS *traversal_dfs = new DFS(image, starting_point, check_tolerance);
  return ImageTraversal::Iterator(*traversal_dfs, starting_point);
}

/**
 * Returns an iterator for the traversal one past the end of the traversal.
 */
ImageTraversal::Iterator DFS::end() {
  /** @todo [Part 1] */
  DFS *traversal_dfs_end = new DFS(image, starting_point, check_tolerance); 
  return ImageTraversal::Iterator(*traversal_dfs_end, starting_point);
  
}

/**
 * Adds a Point for the traversal to visit at some point in the future.
 */
void DFS::add(const Point & point) {
  /** @todo [Part 1] */

/*	if(point.y+1 <= (unsigned int)png_height && visited[point.x][point.y + 1] != true){
		Point point_above = point;
		point_above.y = point.y + 1;
		png_visit.push(point_above);
		
	}
	
	if((int)point.y - 1 >= 0 && visited[point.x][point.y-1] != true){
		Point point_below = point;
		point_below.y = point.y - 1;
		png_visit.push(point_below);
		
	}

	if(point.x+1 <= (unsigned int)png_width && visited[point.x + 1][point.y] != true){
		Point point_right = point;
		point_right.x = point.x + 1;
		png_visit.push(point_right);
		
	}

	
 	if((int)point.x - 1 >= 0 && visited[point.x - 1][point.y] != true){
		Point point_left = point;
		point_left.x = point.x - 1;
		png_visit.push(point_left);
		
	}*/
	png_visit.push(point);
//	visited[point.x][point.y] = true;

}

/**
 * Removes and returns the current Point in the traversal.
 */
Point DFS::pop() {
  /** @todo [Part 1] */
  Point temp = png_visit.top();
  png_visit.pop();
  return temp;
}

/**
 * Returns the current Point in the traversal.
 */
Point DFS::peek() const {
  /** @todo [Part 1] */
  return png_visit.top();
}

/**
 * Returns true if the traversal is empty.
 */
bool DFS::empty() const {
  /** @todo [Part 1] */
  return png_visit.empty();
}

double DFS::get_tolerance(){
	return check_tolerance;
}
PNG DFS::get_png(){
	return image;
}

void DFS::mark_visited(const Point & point){

	visited[point.x][point.y] = true;

}

bool DFS::check_visited(unsigned x, unsigned y){

	if(visited[x][y] == true){
		return true;
	}

	else{
		return false;
	}
}

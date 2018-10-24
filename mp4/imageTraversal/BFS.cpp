#include <iterator>
#include <cmath>

#include <list>
#include <queue>
#include <stack>
#include <vector>

#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"
#include "BFS.h"



/**
 * Initializes a breadth-first ImageTraversal on a given `png` image,
 * starting at `start`, and with a given `tolerance`.
 * @param png The image this BFS is going to traverse
 * @param start The start point of this BFS
 * @param tolerance If the current point is too different (difference larger than tolerance) with the start point,
 * it will not be included in this BFS
 */
BFS::BFS(const PNG & png, const Point & start, double tolerance) {  
  /** @todo [Part 1] */
	png_width = png.width();
	png_height = png.height();
	val = false;
	starting_point = start;
	check_tolerance = tolerance;
	image = png;

	for(int i = 0; i < png_width; i++){
		visited.push_back(std::vector<bool>(png_height, val));
	}
	
	for(int i = 0; i < png_width; i++){
		added.push_back(std::vector<bool>(png_height, val));
	}

	png_visit.push(starting_point);
}

/**
 * Returns an iterator for the traversal starting at the first point.
 */
ImageTraversal::Iterator BFS::begin() {
  /** @todo [Part 1] */
  BFS *traversal_bfs = new BFS(image, starting_point, check_tolerance);
  return ImageTraversal::Iterator(*traversal_bfs, starting_point);
}

/**
 * Returns an iterator for the traversal one past the end of the traversal.
 */
ImageTraversal::Iterator BFS::end() {
  /** @todo [Part 1] */
  //Point *end = new Point(png_width+1, png_height+1);
  //BFS *traversal_bfs2 = new BFS(image, *end, check_tolerance);
  //ImageTraversal::Iterator *end_point = new ImageTraversal::Iterator(*traversal_bfs2, *end); 
  return ImageTraversal::Iterator();
}

/**
 * Adds a Point for the traversal to visit at some point in the future.
 */
void BFS::add(const Point & point) {
  /** @todo [Part 1] */
	png_visit.push(point);
}

/**
 * Removes and returns the current Point in the traversal.
 */
Point BFS::pop() {
  /** @todo [Part 1] */
	Point temp = png_visit.front();
  	png_visit.pop();
  	return temp;
}

/**
 * Returns the current Point in the traversal.
 */
Point BFS::peek() const {
  /** @todo [Part 1] */
  return png_visit.front();
}

/**
 * Returns true if the traversal is empty.
 */
bool BFS::empty() const {
  /** @todo [Part 1] */
  return png_visit.empty();
}

double BFS::get_tolerance(){
	return check_tolerance;
}
PNG BFS::get_png(){
	return image;
}

void BFS::mark_visited(const Point & point){

	visited[point.x][point.y] = true;

}

bool BFS::check_visited(unsigned x, unsigned y){

	if(visited[x][y] == true){
		return true;
	}

	else{
		return false;
	}
}

void BFS::mark_added(unsigned x, unsigned y){

	added[x][y] = true;

}

bool BFS::check_added(unsigned x, unsigned y){

	if(added[x][y] == true){
		return true;
	}

	else{
		return false;
	}
}

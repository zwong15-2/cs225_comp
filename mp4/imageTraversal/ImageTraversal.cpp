#include <cmath>
#include <iterator>
#include <iostream>

#include "../cs225/HSLAPixel.h"
#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

using namespace cs225;

/**
 * Calculates a metric for the difference between two pixels, used to
 * calculate if a pixel is within a tolerance.
 * 
 * @param p1 First pixel
 * @param p2 Second pixel
 * @return the difference between two HSLAPixels
 */
double ImageTraversal::calculateDelta(const HSLAPixel & p1, const HSLAPixel & p2) {
  double h = fabs(p1.h - p2.h);
  double s = p1.s - p2.s;
  double l = p1.l - p2.l;

  // Handle the case where we found the bigger angle between two hues:
  if (h > 180) { h = 360 - h; }
  h /= 360;

  return sqrt( (h*h) + (s*s) + (l*l) );    
}

/**
 * Default iterator constructor.
 */
ImageTraversal::Iterator::Iterator() : traversal(NULL) {
  /** @todo [Part 1] */
  
}

ImageTraversal::Iterator::Iterator(ImageTraversal &traversal, Point starting) : traversal(&traversal), starting(starting)
{
	current = starting;
}

ImageTraversal::Iterator::Iterator(const ImageTraversal::Iterator &other){
	traversal = other.traversal;	
}

/**
i * Iterator increment opreator.
 *
 * Advances the traversal of the image.
 */
ImageTraversal::Iterator & ImageTraversal::Iterator::operator++() {
  /** @todo [Part 1] */

	// current = traversal->peek();
	//current = traversal->pop();

	if(traversal->check_visited(current.x, current.y) != true){
		
		traversal->mark_visited(current);
		PNG temp = traversal->get_png();
		HSLAPixel & pixel2 = temp.getPixel(starting.x, starting.y);			
	
		if(current.x+1 < (unsigned)temp.width() && traversal->check_visited(current.x+1,current.y) != true /*&& !traversal->check_added(current.x+1, current.y)*/){

			HSLAPixel & pixel1 = temp.getPixel(current.x+1, current.y);

			if(calculateDelta(pixel1, pixel2) < traversal->get_tolerance() ){
				Point *point_right = new Point(current.x + 1, current.y);
				traversal->add(*point_right);
				traversal->mark_added(current.x+1, current.y);
				}
			}

		if( current.y + 1 < (unsigned)temp.height() && traversal->check_visited(current.x,current.y+1) != true /*&& !traversal->check_added(current.x, current.y+1)*/){

			HSLAPixel & pixel1 = temp.getPixel(current.x, current.y+1);

			if(calculateDelta(pixel1, pixel2) < traversal->get_tolerance() ){
				Point *point_below = new Point(current.x, current.y + 1);
				traversal->add(*point_below);
				traversal->mark_added(current.x, current.y+1);
				}
			}	

		if((int)current.x - 1 >= 0 && traversal->check_visited(current.x-1,current.y) != true /*&& !traversal->check_added(current.x-1, current.y)*/){

			HSLAPixel & pixel1 = temp.getPixel(current.x-1, current.y);

			if(calculateDelta(pixel1, pixel2) < traversal->get_tolerance() ){
				Point *point_left = new Point(current.x - 1, current.y);
				traversal->add(*point_left);
				traversal->mark_added(current.x-1, current.y);
				}
			}
		if((int)current.y-1 >= 0 && traversal->check_visited(current.x,current.y-1) != true /*&& !traversal->check_added(current.x, current.y-1)*/){

			HSLAPixel & pixel1 = temp.getPixel(current.x, current.y-1);

			if(calculateDelta(pixel1, pixel2) < traversal->get_tolerance() ){
				Point *point_above = new Point(current.x, current.y - 1);
				traversal->add(*point_above);
				traversal->mark_added(current.x, current.y-1);
				}
			}
		}
 	if (!traversal->empty()) {
		current = traversal->peek();
		while(traversal->check_visited(current.x, current.y) == true){
			if(traversal->empty() != true){	
				current = traversal->pop();	
			}
			else{
				return *this;
			}
		}
	}
	current = traversal->pop();
  return *this;
}

/**
 * Iterator accessor opreator.
 * 
 * Accesses the current Point in the ImageTraversal.
 */
Point ImageTraversal::Iterator::operator*() {
  /** @todo [Part 1] */
  return current;
}

/**
 * Iterator inequality operator.
 * 
 * Determines if two iterators are not equal.
 */
bool ImageTraversal::Iterator::operator!=(const ImageTraversal::Iterator &other) {
  /** @todo [Part 1] */
  bool this_empty = false;
  bool other_empty = false;

  if(traversal == NULL) {this_empty = true; }
  if(other.traversal == NULL) {other_empty = true; }

  if(!this_empty) {this_empty = traversal->empty(); }
  if(!other_empty) {other_empty = other.traversal->empty(); }

  if(this_empty && other_empty){
	 return false;
  }
  else if((!this_empty) && (!other_empty)){
 	 return(traversal != other.traversal);
  }
  else{
	return true;
  }
}


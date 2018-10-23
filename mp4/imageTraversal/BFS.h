/**
 * @file BFS.h
 */

#pragma once

#include <iterator>
#include <cmath>
#include <list>
#include <queue>

#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

using namespace cs225;

/**
 * A breadth-first ImageTraversal.
 * Derived from base class ImageTraversal
 */
class BFS : public ImageTraversal {
public:
  BFS(const PNG & png, const Point & start, double tolerance);

  ImageTraversal::Iterator begin();
  ImageTraversal::Iterator end();
  
  void add(const Point & point);
  Point pop();
  Point peek() const;
  bool empty() const;
  double get_tolerance();
  PNG get_png();
  void mark_visited(const Point & point);
  bool check_visited(unsigned x, unsigned y);
  void mark_added(unsigned x, unsigned y);
  bool check_added(unsigned x, unsigned y);

private:
	/** @todo [Part 1] */
	/** add private members here*/
	std::queue<Point> png_visit;
	std::vector<std::vector<bool> > visited;
	std::vector<std::vector<bool> > added;
	int png_height;
	int png_width;
	bool val;
	double check_tolerance;
	Point starting_point;
	PNG image;
};

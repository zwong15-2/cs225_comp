/* Your code here! */
#pragma once
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <cstdlib>
#include "cs225/PNG.h"
#include "dsets.h"

using namespace std;
using namespace cs225;

//Class contains the SquareMaze object. This class
//constructs a randomly generated square maze.
class SquareMaze{

	public:
		//Default Constructor
		SquareMaze();
		
		//Makes a new SquareMaze object with a given width and height
		void makeMaze(int width, int height);

		//Determines whether it is possible to travel in direction of x,y coordinates
		bool canTravel(int x, int y, int dir) const;
		
		//Sets whether not a specified wall exists
		void setWall(int x, int y, int dir, bool exists);

		//Solves the SquareMaze
		vector<int> solveMaze();

		//Draws the maze but does not contain the solution
		cs225::PNG * drawMaze() const;

		//Draws the maze with and its solution
		cs225::PNG * drawMazeWithSolution();

		//Draws creative maze for Part 3
		PNG * drawCreativeMaze();

	private:
		int width;

		int height;

		vector<bool> downWall;
	
		vector<bool> rightWall;

};
		

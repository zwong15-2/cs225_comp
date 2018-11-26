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


class SquareMaze{

	public:
		SquareMaze();

		void makeMaze(int width, int height);

		bool canTravel(int x, int y, int dir) const;

		void setWall(int x, int y, int dir, bool exists);

		vector<int> solveMaze();

		cs225::PNG * drawMaze() const;

		cs225::PNG * drawMazeWithSolution();

	private:
		int width;

		int height;

		vector<bool> downWall;
	
		vector<bool> rightWall;

};
		

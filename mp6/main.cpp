#include <iostream>
#include "dsets.h"
#include "maze.h"
#include "cs225/PNG.h"
#include "tests/mazereader.h"

using namespace std;
using namespace cs225;

int main()
{
    // Write your own main here
    PNG baseImage;
	baseImage.readFromFile("diamond.png");
	SquareMaze maze;
	maze.makeMaze(baseImage.width(), baseImage.height());
	maze.solveMaze();
	PNG * result = maze.drawCreativeMaze();	
	result->writeToFile("creative.png");
}

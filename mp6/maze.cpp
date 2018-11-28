/* Your code here! */
#include "maze.h"

using namespace std;

//No parameter constructor
//that constructs an empty/blank maze
SquareMaze::SquareMaze(){


}

//This function makes a new SquareMaze with a specified
//width and height
void SquareMaze::makeMaze(int width, int height){
	this->width = width;
	this->height = height;
	for(int i = 0; i < width*height; i++){
		downWall.push_back(true);
		rightWall.push_back(true);
	}

	DisjointSets maze;
	maze.addelements(height * width);
	int bound = 0;
	while(bound < width * height - 1){
		int rand_x = rand() % width;
		int rand_y = rand() % height;
		bool rand_r = rand() % 2;

		if(rand_r){
			if(rand_x < width - 1 && rightWall[rand_x + rand_y * width] && maze.find(rand_x + rand_y * width) != maze.find(rand_x + 1 + rand_y * width)){
				rightWall[rand_x + rand_y * width] = false;
				maze.setunion(maze.find(rand_x + rand_y * width), maze.find(rand_x + 1 + rand_y * width));
				bound++;
			}
		}
		else{
			if(rand_y < height - 1 && downWall[rand_x + rand_y * width] && maze.find(rand_x + rand_y * width) != maze.find(rand_x + (rand_y + 1) * width)){
				downWall[rand_x + rand_y * width] = false;
				maze.setunion(maze.find(rand_x + rand_y * width), maze.find(rand_x + (1 + rand_y) * width));
				bound++;
			}
		}
	}
}

//Determines whether it is possible to travel in the
//direction given the (x,y) coordinates.
//0 = step in +x direction
//1 = step in +y direction
//2 = step in -x direction
//3 = step in -y direction
bool SquareMaze::canTravel(int x, int y, int dir) const{

	if(dir == 0){
		return !(rightWall[x + y * width]);
	}

	if(dir == 1){
		return !(downWall[x + y * width]);
	}

	if(dir == 2){
		if(x == 0){
			return false;
		}
		else{
			return !(rightWall[(x - 1) + y * width]);
		}
	}

	if(dir == 3){
		if(y == 0){
			return false;
		}
		else{
			return !(downWall[x + (y-1) * width]);
		}
	}

	return false;
}

void SquareMaze::setWall(int x, int y, int dir, bool exists){
	if(dir == 0){
		rightWall[x + y * width] = exists;
	}

	else if(dir == 1){
		downWall[x + y * width] = exists;
	}
}

//This function solves the drawn SquareMaze.
//Steps are represented by 0,1,2,3.
vector<int> SquareMaze::solveMaze(){

	vector<int> last_row;
	map<int, int> steps;
	vector<bool> visited;

	for(int i = 0; i < width*height; i++) visited.push_back(false);

	queue<int> q;
	q.push(0);
	visited[0] = true;

	while(!q.empty()){
		int a = q.front();
		q.pop();
		int x = a % width;
		int y = a / width;
		if(y == height - 1){
			last_row.push_back(a);
		}

		if(canTravel(x,y,0) && !visited[a+1]){
			steps.insert(pair<int, int> (a+1,a));
			visited[a+1] = true;
			q.push(a+1);
		}

		if(canTravel(x,y,1) && !visited[a + width]){
			steps.insert(pair<int, int>(a+width, a));
			visited[a+width] = true;
			q.push(a+width);
		}

		if(canTravel(x,y,2) && !visited[a - 1]){
			steps.insert(pair<int, int>(a - 1, a));
			visited[a-1] = true;
			q.push(a-1);
		}

		if(canTravel(x,y,3) && !visited[a - width]){
			steps.insert(pair<int, int>(a-width, a));
			visited[a-width] = true;
			q.push(a-width);
		}
	}

	vector<int> direction;
	int last = width - 1;
	while(last_row[last] == last_row[last-1]) last -= 1;
	int start = last_row[last];
	while(start != 0){
		int prev = steps[start];
		if(start == prev + 1) direction.push_back(0);
		else if(start == prev - 1) direction.push_back(2);
		else if(start == prev + width) direction.push_back(1);
		else if(start == prev - width) direction.push_back(3);
		start = prev;
	}

	reverse(direction.begin(), direction.end());
	return direction;
}	

//This function draws the SquareMaze
//without the solution.
PNG * SquareMaze::drawMaze() const{
	int pic_h = height * 10 + 1;
	int pic_w = width * 10 + 1;
	PNG* unsolved = new PNG(pic_w, pic_h);
	for(int i = 0; i < pic_h; i++){
		HSLAPixel & pixel = unsolved->getPixel(0,i);
		pixel.l = 0.0;
	}

	for(int i = 10; i < pic_w; i++){
		HSLAPixel & pixel = unsolved->getPixel(i,0);
		pixel.l = 0.0;
	}

	for(int x = 0; x < width; x++){
		for(int y = 0; y < height; y++){
			if(rightWall[x + y * width]){
				for(int i = 0; i < 11; i++){
					HSLAPixel & pixel = unsolved->getPixel(10 * (x + 1), 10 * y + i);
					pixel.l = 0.0;
				}
			}
			if(downWall[x + y * width]){
				for(int i = 0; i < 11; i++){
					HSLAPixel & pixel = unsolved->getPixel(10 * x + i, 10 * (y + 1));
					pixel.l = 0.0;
				}
			}
		}
	}
	return unsolved;
}

//Draws the SquareMaze with the solution
//to solve it.
PNG * SquareMaze::drawMazeWithSolution(){
	PNG* unsolved = drawMaze();
	vector<int> direction = solveMaze();
	int x = 5;
	int y = 5;
	for(unsigned i = 0; i < direction.size(); i++){
		if(direction[i] == 0){
			for(int i = 0; i < 10; i++){
				HSLAPixel & pixel = unsolved->getPixel(x,y);
				pixel.h = 0;
				pixel.s = 1;
				pixel.l = 0.5;
				x += 1;
			}
		}
		else if(direction[i] == 1){
			for(int i = 0; i < 10; i++){
				HSLAPixel & pixel = unsolved->getPixel(x,y);
				pixel.h = 0;
				pixel.s = 1;
				pixel.l = 0.5;
				y += 1;
			}
		}
		else if(direction[i] == 2){
			for(int i = 0; i < 10; i++){
				HSLAPixel & pixel = unsolved->getPixel(x,y);
				pixel.h = 0;
				pixel.s = 1;
				pixel.l = 0.5;
				x -= 1;	
			}
		}
		else if(direction[i] == 3){
			for(int i = 0; i < 10; i++){
				HSLAPixel & pixel = unsolved->getPixel(x,y);
				pixel.h = 0;
				pixel.s = 1;
				pixel.l = 0.5;
				y -= 1;
			}
		}
	}
	HSLAPixel & p = unsolved->getPixel(x,y);
	p.h = 0.0;
	p.s = 1.0;
	p.l = 0.5;
	p.a = 1.0;
	x -= 4;
	y += 5;
	for(int i = 0; i < 9; i++){
		HSLAPixel & pixel = unsolved->getPixel(x,y);
		pixel.l = 1.0;
		pixel.a = 1.0;
		x += 1;
	}
	return unsolved;
}

//Draws creative maze for Part 3
PNG * SquareMaze::drawCreativeMaze(){
	PNG* unsolved = drawMaze();
	vector<int> direction = solveMaze();
	int x = 5;
	int y = 5;
	for(unsigned i = 0; i < direction.size(); i++){
		if(direction[i] == 0){
			for(int i = 0; i < 10; i++){
				HSLAPixel & pixel = unsolved->getPixel(x,y);
				pixel.h = 0;
				pixel.s = 1;
				pixel.l = 0.5;
				x += 1;
			}
		}
		else if(direction[i] == 1){
			for(int i = 0; i < 10; i++){
				HSLAPixel & pixel = unsolved->getPixel(x,y);
				pixel.h = 0;
				pixel.s = 1;
				pixel.l = 0.5;
				y += 1;
			}
		}
		else if(direction[i] == 2){
			for(int i = 0; i < 10; i++){
				HSLAPixel & pixel = unsolved->getPixel(x,y);
				pixel.h = 0;
				pixel.s = 1;
				pixel.l = 0.5;
				x -= 1;	
			}
		}
		else if(direction[i] == 3){
			for(int i = 0; i < 10; i++){
				HSLAPixel & pixel = unsolved->getPixel(x,y);
				pixel.h = 0;
				pixel.s = 1;
				pixel.l = 0.5;
				y -= 1;
			}
		}
	}
	HSLAPixel & p = unsolved->getPixel(x,y);
	p.h = 0.0;
	p.s = 1.0;
	p.l = 0.5;
	p.a = 1.0;
	x -= 4;
	y += 5;
	for(int i = 0; i < 9; i++){
		HSLAPixel & pixel = unsolved->getPixel(x,y);
		pixel.l = 1.0;
		pixel.a = 1.0;
		x += 1;
	}
	return unsolved;
}

/**
 * @file maptiles.cpp
 * Code for the maptiles function.
 */

#include <iostream>
#include <map>
#include "maptiles.h"
//#include "cs225/RGB_HSL.h"

using namespace std;


Point<3> convertToXYZ(LUVAPixel pixel) {
    return Point<3>( pixel.l, pixel.u, pixel.v );
}

MosaicCanvas* mapTiles(SourceImage const& theSource,
                       vector<TileImage>& theTiles)
{
    /**
     * @todo Implement this function!
     */
	if(theTiles.empty()){
		return NULL;
	}
	
	map<Point<3>, int> tileMap;
	vector<Point<3>> tiles;
//	tiles.resize(theTiles.size());
	for(size_t x = 0; x < theTiles.size(); x++){

		LUVAPixel p = theTiles[x].getAverageColor();
	//	double arr[3] = {p.l, p.u, p.v};
		Point<3> point = convertToXYZ(p);
		tiles.push_back(point);
		tileMap[point] = x;
	}
	

	KDTree<3> tree(tiles);
	int row = theSource.getRows();
	int col = theSource.getColumns();
	MosaicCanvas* canvas = new MosaicCanvas(row, col);

	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			LUVAPixel pixel = theSource.getRegionColor(i, j);			
			Point<3> query = convertToXYZ(pixel);
			canvas->setTile(i, j, &(theTiles[tileMap[tree.findNearestNeighbor(query)]]));
		}
	}

	return canvas;
}


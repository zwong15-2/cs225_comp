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


/**Constructs image mosaic out of a given source image
 * and tile images. Stores the collected tile images
 * and its colors. Finds nearest neighbor coloring point
 * that would best match source image color. Returns mosaic**/
MosaicCanvas* mapTiles(SourceImage const& theSource,
                       vector<TileImage>& theTiles){

    /**
     * @todo Implement this function!
     */
	if(theTiles.empty()){
		return NULL;
	}

	vector<Point<3>> tiles;
	int row = theSource.getRows();
	int col = theSource.getColumns();
	tiles.resize(theTiles.size());
	map<Point<3>, int> point_map;

	unsigned x = 0;

	while(x != tiles.size()){
		tiles[x].set(0, theTiles[x].getAverageColor().l);
		tiles[x].set(1, theTiles[x].getAverageColor().u);
		tiles[x].set(2, theTiles[x].getAverageColor().v);
		point_map[tiles[x]] = x;
		x++;
	}

	KDTree<3> tree(tiles);
	MosaicCanvas* canvas = new MosaicCanvas(row, col);
	vector<Point<3>> map;

	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			LUVAPixel pixel = theSource.getRegionColor(i,j);
			Point<3> query = convertToXYZ(pixel);
			map.push_back(query);
			canvas->setTile(i, j, &theTiles[point_map[tree.findNearestNeighbor(query)]]);
		}
	}

	return canvas;
			
}


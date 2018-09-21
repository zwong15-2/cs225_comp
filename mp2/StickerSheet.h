/**
 * @file StickerSheet.h
 * Contains your declaration of the interface for the StickerSheet class.
 */
#pragma once
#include <iostream>
#include <string>
#include "Image.h"

using namespace std;

class StickerSheet{

public:
	StickerSheet(const Image & picture, unsigned max);

	~StickerSheet();

	StickerSheet(const StickerSheet & other);

	const StickerSheet & operator=(const StickerSheet & other);

	void changeMaxStickers(unsigned new_max);

	int addSticker(Image & sticker, unsigned x, unsigned y);

	bool translate(unsigned index, unsigned x, unsigned y);

	void removeSticker(unsigned index);

	Image * getSticker(unsigned index) const;

	Image render() const;
	
	void clear();
	
	void copy(const StickerSheet & other);	

private:
	Image* base_picture;

	Image** stickersheet;
	
	int * sticker_x_coor;

	int * sticker_y_coor;
	
	unsigned max;

	unsigned count;

};
 

#include "StickerSheet.h"
#include "Image.h"
#include "./cs225/PNG.h"
using cs225::PNG;
#include "./cs225/HSLAPixel.h"
using cs225::HSLAPixel;
#include <iostream>
#include <string>

using namespace std;

StickerSheet::StickerSheet(const Image & picture, unsigned max){

	base_picture = new Image(picture);
	//*base_picture = picture;
	this->max = max;
	count = 0;
	stickersheet = new Image *[max];

	/*
	for(unsigned x = 0; x < max; x++){
		*(stickersheet + x) = NULL;
	}
	*/

	sticker_x_coor = new int [max];
	sticker_y_coor = new int [max];

}

StickerSheet::~StickerSheet(){

	clear();

}

StickerSheet::StickerSheet(const StickerSheet & other){

	copy(other);

}

const StickerSheet & StickerSheet::operator=(const StickerSheet & other){

	if(this != &other){
		clear();
		copy(other);
	}

	return *this;

}

void StickerSheet::changeMaxStickers(unsigned new_max){

	if(new_max < max){
		for(unsigned x = new_max - 1; x < max; x++){
			if( *(stickersheet + x) != NULL){
				return;
			}
		}
	}

	if(new_max == max){
		return;
	}
	
	else if (new_max < max){
	
		Image** copy_stickersheet = new Image *[new_max];
		int* copy_sticker_x_coor = new int [new_max];
		int* copy_sticker_y_coor = new int [new_max];

		for(unsigned y = 0; y < new_max; y++){
			copy_stickersheet[y] = stickersheet[y];
			copy_sticker_x_coor[y] = sticker_x_coor[y];
			copy_sticker_y_coor[y] = sticker_y_coor[y];
		}

		clear();

		stickersheet = copy_stickersheet;
		sticker_x_coor = copy_sticker_x_coor;
		sticker_y_coor = copy_sticker_y_coor;
		count = new_max;
		max = new_max;

	}

	else{

		Image** copy_stickersheet2 = new Image *[new_max];
		int* copy_sticker_x_coor2 = new int [new_max];
		int* copy_sticker_y_coor2 = new int [new_max];
	
		for(unsigned a  = 0; a < new_max; a++){
			copy_stickersheet2[a] = stickersheet[a];
			copy_sticker_x_coor2[a] = sticker_x_coor[a];
			copy_sticker_y_coor2[a] = sticker_y_coor[a];
		}

		for(unsigned b = max - 1; b < new_max; b++){
			copy_stickersheet2[b] = NULL;
		}

		clear();
		stickersheet = copy_stickersheet2;
		sticker_x_coor = copy_sticker_x_coor2;
		sticker_y_coor = copy_sticker_y_coor2;
		max = new_max;
	}

}		

int StickerSheet::addSticker(Image & sticker, unsigned x, unsigned y){

	if(count < max){
	
		stickersheet[count] = &sticker;
		sticker_x_coor[count] = x;
		sticker_y_coor[count] = y;
		count++;
		return count - 1;
	}

	else{

		return -1;
	}


}

bool StickerSheet::translate( unsigned index, unsigned x, unsigned y){

	if(index >= count) /*max || stickersheet[index] == NULL)*/{

		return false;
	}

	else{
		sticker_x_coor[index] = x;
		sticker_y_coor[index] = y;
		return true;

	}

}

void StickerSheet::removeSticker(unsigned index){
	
	if(index >= count){
		return;
	}

	else{
	/*	delete stickersheet[index];*/
		// Move all next stickers back 1 space
		for (unsigned i = index; i < count - 1; i++) {
			stickersheet[i] = stickersheet[i + 1];
			sticker_x_coor[i] = sticker_x_coor[i + 1];
			sticker_y_coor[i] = sticker_y_coor[i + 1];
		}
		count--;
	}

}

Image * StickerSheet::getSticker(unsigned index) const{

	if(index >= count){
		return NULL;
	}

	else{
		return stickersheet[index];
	}	

}

Image StickerSheet::render() const{

	/*size_t base_picture_width = base_picture->width();
	size_t base_picture_height = base_picture->height();
	/PNG *base_pic = new PNG(base_picture_width, base_picture_height);


	for(unsigned x = 0; x < max; x++){
		if(stickersheet[x] != NULL){
			size_t sticker_width = stickersheet[x]->width() + (size_t)sticker_x_coor[x];
			size_t sticker_height = stickersheet[x]->height() + (size_t)sticker_y_coor[x];
			if(sticker_width > base_picture_width){
				base_picture_width = sticker_width;}
			if(sticker_height > base_picture_height){
				base_picture_height = sticker_width;}
		}
	}*/

		
	for(unsigned y = 0; y < count; y++){
		if(stickersheet[y] != NULL){
			size_t copy_width = stickersheet[y]->width();
			size_t copy_height = stickersheet[y]->height();
			size_t copy_x_coor = (size_t)sticker_x_coor[y];
			size_t copy_y_coor = (size_t)sticker_y_coor[y];
			size_t max_x = (copy_width) + copy_x_coor;
			size_t max_y = (copy_height) + copy_y_coor;
			
			if(max_x > base_picture->width()){
				base_picture->resize(max_x, base_picture->height());
			}
		
			if(max_y > base_picture->height()){
				base_picture->resize(base_picture->width(), max_y);
			}

			for(size_t a = 0; a < copy_width; a++){
				for(size_t b = 0; b < copy_height; b++){
				
					HSLAPixel & pixel_sticker = stickersheet[y]->getPixel(a,b);
					if(pixel_sticker.a != 0){
						base_picture->getPixel(a + copy_x_coor, b + copy_y_coor) = pixel_sticker;
					}
	
				}
			}
		}
	}
	
	return *base_picture;

}

void StickerSheet::clear(){

	/*for(unsigned a = 0; a < max; a++){
		if( *(stickersheet + a) != NULL){
			delete *(stickersheet + a);
			*(stickersheet + a) = NULL;
		}
	}*/

	delete [] stickersheet;
	stickersheet = NULL;

	delete [] sticker_x_coor;
	stickersheet = NULL;

	delete [] sticker_y_coor;
	stickersheet = NULL;

}

void StickerSheet::copy(const StickerSheet & other){

	max = other.max;
	count = other.count;
	stickersheet = new Image *[max];
	sticker_x_coor = new int[max];
	sticker_y_coor = new int[max];

	for(unsigned b = 0; b < count; b++){
		*(stickersheet + b) = NULL;
	}

	for(unsigned c = 0; c < count; c++){
		*(sticker_x_coor + c) = 0;
		*(sticker_y_coor + c) = 0;
	}

	for(unsigned a = 0; a < count; a++){

		if(other.stickersheet[a] != NULL){
        
			stickersheet[a] = (other.stickersheet[a]);
		/*	*stickersheet[a] = *(other.stickersheet[a]); */
			sticker_x_coor[a] = other.sticker_x_coor[a];
			sticker_y_coor[a] = other.sticker_y_coor[a];
		}
	}

}

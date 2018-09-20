#include "Image.h"
#include <algorithm>
#include <iostream>
#include "cs225/PNG.h"
using cs225::PNG;

#include "cs225/HSLAPixel.h"
using cs225::HSLAPixel;

#include <string>
using std::string;

using namespace std;


void Image::lighten(){

//unsigned int w = width();
//unsigned int h = height();

for(unsigned x = 0; x < width(); x++){
	for(unsigned y = 0; y < height(); y++){
		HSLAPixel & pixel = getPixel(x,y);
		pixel.l += 0.1;
		if(pixel.l > 1){
			pixel.l = 1;}
		if(pixel.l < 0){
			pixel.l = 0;}
		}
	}
}

void Image::lighten(double amount){

for(unsigned x = 0; x < width(); x++){
	for(unsigned y = 0; y < height(); y++){
		HSLAPixel & pixel = getPixel(x,y);
		pixel.l += amount;
		if(pixel.l >= 1){
			pixel.l = 1;}
		if(pixel.l <= 0){
			pixel.l = 0;}
		}
	}
}

void Image::darken(){

for(unsigned x = 0; x < width(); x++){
	for(unsigned y = 0; y < height(); y++){
		HSLAPixel & pixel = getPixel(x,y);
		pixel.l -= 0.1;
		if(pixel.l < 0){
			pixel.l = 0;}
		}
	}
}

void Image::darken(double amount){

for(unsigned x = 0; x < width(); x++){
	for(unsigned y = 0; y < height(); y++){
		HSLAPixel & pixel = getPixel(x,y);
		pixel.l -= amount;
		if(pixel.l < 0){
			pixel.l = 0;}
		}
	}
}

void Image::saturate(){

for(unsigned x = 0; x < width(); x++){
	for(unsigned y = 0; y < height(); y++){
		HSLAPixel & pixel = getPixel(x,y);
		pixel.s += 0.1;
		}
	}
}

void Image::saturate(double amount){

for(unsigned x = 0; x < width(); x++){
	for(unsigned y = 0; y < height(); y++){
		HSLAPixel & pixel = getPixel(x,y);
		pixel.s += amount;
		}
	}
}

void Image::desaturate(){

for(unsigned x = 0; x < width(); x++){
	for(unsigned y = 0; y < height(); y++){
		HSLAPixel & pixel = getPixel(x,y);
		pixel.s -= 0.1;
		}
	}
}

void Image::desaturate(double amount){

for(unsigned x = 0; x < width(); x++){
	for(unsigned y = 0; y < height(); y++){
		HSLAPixel & pixel = getPixel(x,y);
		pixel.s -= amount;
		}
	}
}

void Image::rotateColor(double degrees){

for(unsigned x = 0; x < width(); x++){
	for(unsigned y = 0; y < height(); y++){
		HSLAPixel & pixel = getPixel(x,y);
		pixel.h += degrees;
		if(pixel.h > 360){
			pixel.h = pixel.h - 360;}
		if(pixel.h < 0){
			pixel.h = 360 + pixel.h;}
		}
	}
}
void Image::grayscale(){

for(unsigned x = 0; x < width(); x++){
	for(unsigned y = 0; y < height(); y++){
		HSLAPixel & pixel = getPixel(x,y);
		pixel.s = 0;
		}
	}
}

void Image::illinify(){

for(unsigned x = 0; x < width(); x++){
	for(unsigned y = 0; y < height(); y++){
		HSLAPixel & pixel = getPixel(x,y);
		if(pixel.h < 104 || pixel.h > 320){
			pixel.h = 11;
		}
		else{
		pixel.h = 216;
			}
		}
	}
}

void Image::scale(double factor){

    PNG *copy_original = new PNG(width(), height());

    for(unsigned x = 0; x < width(); x++){
	for(unsigned y = 0; y < height(); y++){
		HSLAPixel & pixel = copy_original->getPixel(x,y);
		pixel = getPixel(x,y);
		}
	}

    double scaled_width = factor * (double)width();
    double scaled_height = factor * (double)height();


  resize(scaled_width, scaled_height);
  

  for(unsigned a = 0; a*factor < scaled_width; a++){
	 for(unsigned b = 0; b*factor < scaled_height; b++){
		HSLAPixel & pixel = this->getPixel((int)(a * factor), (int)(b * factor));
		pixel = copy_original->getPixel(a,b);
		}
	}
}

void Image::scale(unsigned w, unsigned h){

unsigned int possible_aspect_scale = w/h;
unsigned int original_aspect_scale = width()/height();

unsigned int checker = max(original_aspect_scale, possible_aspect_scale);

if(checker == original_aspect_scale){

	unsigned int new_height = w/original_aspect_scale;

        PNG *copy_original = new PNG(width(),height());
	for(unsigned x = 0; x < width(); x++){
		for(unsigned y = 0; y< height(); y++){
		HSLAPixel & pixel = copy_original->getPixel(x,y);
		pixel = getPixel(x,y);
		}
	}
	resize(width(), new_height);
	unsigned int factor = new_height/height();
	for(unsigned x = 0; x < width(); x++){
		for(unsigned y = 0; y*factor < new_height; y++){
		HSLAPixel & pixel = this->getPixel(x, y*factor);
		pixel = copy_original->getPixel(x,y);
		}
	}
}
else{

	unsigned int new_width = h*original_aspect_scale;

	PNG *copy_original2 = new PNG(width(), height());
	for(unsigned a = 0; a < width(); a++){
		for(unsigned b = 0; b < height(); b++){
		HSLAPixel & pixel = copy_original2->getPixel(a,b);
		pixel = getPixel(a,b);
		}
	}
	resize(new_width, height());
	unsigned int factor2 = new_width/width();
	for(unsigned c = 0; c*factor2 < new_width; c++){
		for(unsigned d = 0; d < height(); d++){
		HSLAPixel & pixel = this->getPixel(c*factor2,d);
		pixel = copy_original2->getPixel(c,d);
		}
	}
}
} 

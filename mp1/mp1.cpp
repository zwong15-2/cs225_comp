#include "cs225/PNG.h"
using cs225::PNG;

#include "cs225/HSLAPixel.h"
using cs225::HSLAPixel;

#include <string>



void rotate(std::string inputFile, std::string outputFile) {
   PNG png_rotate;
   png_rotate.readFromFile(inputFile);
   PNG copy_png = PNG(png_rotate); 
   for(unsigned x =  0; x < png_rotate.width(); x++){
     for(unsigned y = 0; y < png_rotate.height(); y++){
       png_rotate.getPixel(png_rotate.width()-x-1, png_rotate.height()-y-1) = copy_png.getPixel(x,y);
     }
   }
   png_rotate.writeToFile(outputFile);
}

PNG myArt(unsigned int width, unsigned int height) {
  PNG png(width, height);
  for(unsigned x = 0; x < png.width()/3; x++){
    for(unsigned y = 0; y < png.height()/3; y++){
      HSLAPixel & pixel = png.getPixel(x,y);
      pixel.l = 0.6;
      pixel.a = 0.2;
      pixel.h = 1;
    }
  }
  for(unsigned a = 267; a < 533; a++){
    for(unsigned b = 267; b < 533; b++){
      HSLAPixel & pixel_2 = png.getPixel(a,b);
      pixel_2.l = 0.2;
      pixel_2.s = 10;
      pixel_2.h = 223;
    }
  }
  for(unsigned p = 534; p < png.width(); p++){
    for(unsigned q = 534; q < png.height(); q++){
      HSLAPixel & pixel_3 = png.getPixel(p,q);
      pixel_3.a = 0.6;
      pixel_3.l = 0.23;
      pixel_3.h = 300;
    }
  }
  return png;
}

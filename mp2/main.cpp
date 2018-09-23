#include "Image.h"
#include "StickerSheet.h"
#include "./cs225/PNG.h"
#include "./cs225/HSLAPixel.h"

using namespace cs225;

int main() {

  //
  // Reminder:
  //   Before exiting main, save your creation to disk as myImage.png
  //

 Image alma; alma.readFromFile("alma.png");
 Image i;    i.readFromFile("i.png");
 Image lightning; lightning.readFromFile("mcqueen.png");
 Image barney; barney.readFromFile("barney.png");
 Image youtube; youtube.readFromFile("youtube.png");

 StickerSheet sheet(alma, 4);
 sheet.addSticker(i, 15, 200);
 sheet.addSticker(lightning, 1, 1);
 sheet.addSticker(barney, 2, 2);
 sheet.addSticker(youtube, 6, 5);
 Image result = sheet.render();
 result.writeToFile("MyImage.png");




  return 0;
}

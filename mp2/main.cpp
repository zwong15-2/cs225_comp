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
 sheet.addSticker(i, 300, 200);
 sheet.addSticker(i, 500, 126);
 sheet.addSticker(i, 256, 234);
 sheet.addSticker(i, 57, 79);
 Image result = sheet.render();
 result.writeToFile("myImage.png");




  return 0;
}

#include "Color.h"

int main() {
  /*
   * Image Creation
   */
  const int gImageWidth = 256;
  const int gImageHeight = 256;

  for (int i = 0; i < gImageHeight; i++) {
    for (int j = 0; j < gImageWidth; j++) {
      auto PixelColor = Color(double(i) / (gImageWidth - 1),
                              double(j) / (gImageHeight - 1), 0);
      WriteColor(std::cout, PixelColor);
    }
  }
}
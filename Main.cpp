#include <iostream>

int main() {
  /*
  * Image Creation
  */
  const int gImageWidth = 256;
  const int gImageHeight = 256;

  for (int i = 0; i < gImageHeight; i++) {
    for (int j = 0; j < gImageWidth; j++) {
      auto r = double(i) / (gImageWidth - 1);
      auto g = double(i) / (gImageHeight - 1);
      auto b = double(i) / (gImageWidth - 1);
    }
  }

}
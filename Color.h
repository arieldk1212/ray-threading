#ifndef COLOR_H
#define COLOR_H

#include "Vec3.h"

using Color = Vec3;

void WriteColor(std::ostream &out, const Color &PixelColor) {
  auto r = PixelColor.x();
  auto g = PixelColor.y();
  auto b = PixelColor.z();

  /*
   * Translate the [0,1] component values to the byte range [0,255]
   */
  int rbyte = int(255.999 * r);
  int gbyte = int(255.999 * g);
  int bbyte = int(255.999 * b);

  out << rbyte << " " << gbyte << " " << bbyte << "\n";
}

#endif
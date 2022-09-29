#include "block.h"
#include "cs221util/PNG.h"
#include <vector>
#include <cmath>

// set values in data attribute, based on a dimension x dimension square region
//   with upper-left corner at (left, upper) in the input PNG image
// The orientation of the pixels in the data vector must match the orientation
//   of the pixels in the PNG.
// PRE: upper and left (and upper + dimension, left + dimension) are valid
//        vector indices
void Block::Build(PNG& im, int upper, int left, int dimension) {
  data.resize(dimension);
  for (int i = upper; i < upper + dimension; i++) {
    int size = i - upper;
    data[size].resize(dimension);
    for (int j = left; j < left + dimension; j++) {
      data[size].push_back((*im.getPixel(j,i));
    }
  }

}

// Return the horizontal (or vertical) size of the data block's image region
int Block::Dimension() const {
  return data.size();
}

// write the pixel colour data fom data attribute into im,
//   with upper-left corner at (left, upper)
// PRE: upper and left (and upper + dimension, left + dimension) are valid
//        vector indices
void Block::Render(PNG& im, int upper, int left) const {
  for (int i = upper; i < upper + dimension; i++) {
    int y = i - upper;
    for (int j = left; j < left + dimension; j++) {
      int x = j - left;
      HSLAPixel* imagePixel = im.getPixel(j, i);
      imagePixel -> h = data[y][x].h;
      imagePixel -> s = data[y][x].s;
      imagePixel -> l = data[y][x].l;
      imagePixel -> a = data[y][x].a;
    }
  }
}

// "Reverse" the Hue and Luminance channels for each pixel in the data attribute
//   to simulate a photo-negative effect.
// Refer to the HSLAPixel documentation to determine an appropriate transformation
//   for "reversing" hue and luminance.
void Block::Negative() {
  int size = data.size();
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      data[i][j].h = data[i][j].h + 180 % 360;
      if (data[i][j].l == 0) {
        data[i][j].l = 1;
      } else {
        int distance = std:: abs((0.5 - data[i][j].l))
        data[i][j].l = data[i][j].l + distance * 2 % 1;
      }
    }
  }
}

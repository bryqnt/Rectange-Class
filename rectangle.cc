// Bryant Huynh
// CPSC 121L-02
// 09/13/23
// 22bhuynh2@csu.fullerton.edu
// @bryqnt
//
// Lab 4-2
// 
// 

#include "rectangle.h"

unsigned int Rectangle::Area() const {
  // ===================== YOUR CODE HERE ========================
  return length_ * width_;
  // Compute the area of this rectangle object.
  // Remember that member functions can access the member variables of the
  // class. Hint: look at `rectangle.h` to see the member variables you can
  // access.
  // =============================================================
  // return 0;
}

unsigned int Rectangle::Perimeter() const {
  // ===================== YOUR CODE HERE ========================
  return (2*length_) + (2*width_);
  // Compute the perimeter of this rectangle object.
  // =============================================================
  // return 0;
}

Rectangle LargestRectangleByArea(const Rectangle &r1, const Rectangle &r2) {
  // ===================== YOUR CODE HERE ========================
  unsigned int area1 = r1.Area();
  unsigned int area2 = r2.Area();
  if (area1 > area2){
    return r1;
  }
  else{
    return r2;
  }
  // Compare the areas of the two given rectangles, and return
  // the Rectangle whose area is larger.
  // =============================================================
  // return r1;
}

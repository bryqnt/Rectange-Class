// Bryant Huynh
// CPSC 121L-02
// 09/13/23
// 22bhuynh2@csu.fullerton.edu
// @bryqnt
//
// Lab 4-2
// 
// 

#include <iostream>

#include "rectangle.h"

int main() {
  std::cout << "====== Rectangle 1 ======" << std::endl;
  // ===================== YOUR CODE HERE ========================
  int length1 = 0;
  int width1 = 0;
  Rectangle rect1;
  std::cout << "Please enter the length: ";
  std::cin >> length1;
  std::cout << "Please enter the width: ";
  std::cin >> width1;

  rect1.SetLength(length1);
  rect1.SetWidth(width1); 
  std::cout << "Rectangle 1 created with length " << rect1.GetLength() << " and width " << rect1.GetWidth() << "\n";
  std::cout << "The area of Rectangle 1 is: " << rect1.Area() << "\n"; 
  std::cout << "The perimeter of Rectangle 1 is: " << rect1.Perimeter() << "\n\n";
  // Accept user input for the length and width of rectangle 1,
  // and instantiate a new Rectangle object with these inputs.
  // =============================================================

  std::cout << "====== Rectangle 2 ======" << std::endl;
  // ===================== YOUR CODE HERE ========================
  int length2 = 0;
  int width2 = 0;
  Rectangle rect2;
  std::cout << "Please enter the length: ";
  std::cin >> length2;
  std::cout << "Please enter the width: ";
  std::cin >> width2;

  rect2.SetLength(length2);
  rect2.SetWidth(width2); 

  std::cout << "Rectangle 2 created with length " << rect2.GetLength() << " and width " << rect2.GetWidth();
  std::cout << "\nThe area of Rectangle 2 is: " << rect2.Area();
  std::cout << "\nThe perimeter of Rectangle 2 is: " << rect2.Perimeter(); 
 
  // Accept user input for the length and width of rectangle 2,
  // and instantiate a new Rectangle object with these inputs.
  // =============================================================
  Rectangle larger_rect = LargestRectangleByArea(rect1, rect2);
  std::cout << "\nThe largest rectangle has a length of " << larger_rect.GetLength() << ", a width of " << larger_rect.GetWidth() << ", and an area of " << larger_rect.Area() << std::endl;
  // ===================== YOUR CODE HERE ========================
  // Call LargestRectangleByArea to determine which rectangle
  // is larger, and print out its length, width, and area.
  // Follow the README for formatting.
  // =============================================================
  return 0;
}

// Copyright (c) 2019 Patrick Gemmell All rights reserved.
//
// Created by: Patrick Gemmell
// Created on: September 12 2019
// This Program calculates the perimeter and
// area from a user inputed dimesnions of a rectangle

#include <iostream>

int main() {
    // This function calculates area and perimeter
    int Length;
    int width;
    int area;
    int perimeter;


    std::cout << "Enter Length of rectangle (mm): " << std::endl;
    std::cin  >> Length;
    std::cout << "Enter Width of the rectangle (mm): " << std::endl;
    std::cin  >> width;


    area = Length*width;
    perimeter = 2*(Length+width);


    std::cout << "" << std::endl;
    std::cout << "Area is" << area << "mm**2" << std::endl;
    std::cout << "Perimeter is" << perimeter << "mm" << std::endl;
}

// Copyright (c) 2021 Liam Fletcher All rights reserved
//
// Created by: Liam Fletcher
// Created on: Sep 2021
// This program calculates the area and perimeter of a rectangle
//    with radius inputted from the user

#include <iostream>
#include <cmath>

int main() {
    // this function calculates the area and perimeter of a rectangle
    int length;
    int width;
    int areaOfRectangle;
    int perimeterOfRectangle;

    // input
    std::cout << "Enter length of a rectangle (mm): ";
    std::cin >> length;

    // input
    std::cout << "Enter width of a rectangle (mm): ";
    std::cin >> width;

    // process
    areaOfRectangle = length * width;
    perimeterOfRectangle = 2 * (length + width);

    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << areaOfRectangle << " mm²." << std::endl;
    std::cout << "Perimeter is " << perimeterOfRectangle << " mm." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}

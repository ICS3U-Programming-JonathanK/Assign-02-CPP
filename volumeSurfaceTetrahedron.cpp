// Copyright (c) 2021 Jonathan Kene All rights reserved.
//
// Created by: Jonathan Kene
// Created on: May. 3, 2021
// This program asks the user for the edge
// length in m. It then calculates and displays
// the area and perimeter.
#include <iostream>
#include <cmath>
// declare variables
float edge, volume, surfaceArea;

int main() {
  // get input from user
  std::cout << "Today we will calculate the volume and\n";
  std::cout << "surface area of a tetrahedron.\n";
  std::cout << "Enter the edge length for volume and surface area(m): ";
  std::cin >> edge;

  // calculate volume and surface area
  volume = (pow(edge, 3) / (6 * sqrt(2)));
  surfaceArea = sqrt(3 * (pow(edge, 2)));
  volume = std::ceil(volume * 100.0) / 100.0;
  surfaceArea = std::ceil(surfaceArea * 100.0) / 100.0;

  // display the results to the user
  std::cout << std::endl;
  std::cout << "Volume = " << volume <<" mm^3.\n";
  std::cout << "Surface area = " << surfaceArea << "m^2.\n";
}

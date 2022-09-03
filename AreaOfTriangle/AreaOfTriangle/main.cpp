// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    float area, base, height;

    std::cout << "Please enter 'base' and 'height'" << std::endl;

    std::cout << "Base: "; std::cin >> base;
    std::cout << "Height: "; std::cin >> height;

    area = (base * height) / 2;

   std::cout << "Area: " << area;

    return 0;
}


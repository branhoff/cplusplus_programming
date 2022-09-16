// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int sum(int x, int y) {
    return x + y;
}

float sum(float x, float y) {
    return x + y;
}

int sum(int x, int y, int z) {
    return x + y + z;
}

int main()
{
    std::cout << sum(10, 5) << std::endl;
    std::cout << sum(12.9f, 8.3f) << std::endl;
    std::cout << sum(10, 20, 30) << std::endl;
}



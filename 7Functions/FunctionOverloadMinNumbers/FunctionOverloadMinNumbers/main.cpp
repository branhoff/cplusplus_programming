// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int min(int x, int y) {

    if (x < y) {
        return x;
    }
    else {
        return y;
    }
}

float min(float x, float y) {

    if (x < y) {
        return x;
    }
    else {
        return y;
    }
}

int min(int x, int y, int z) {

    if (x < y && x < z) {
        return x;
    }
    else if (y < z) {
        return y;
    }
    else {
        return z;
    }
}

int main()
{
    std::cout << min(10, 5) << std::endl;
    std:: cout << min(12, 7, 9) << std::endl;
    std::cout << min(18.0f, 9.0f) << std::endl;
}


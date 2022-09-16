// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

template <class T>
T max(T a, T b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int main()
{
    std::cout << max(10, 5) << std::endl;
    std::cout << max(12.5f, 17.3f) << std::endl;
}

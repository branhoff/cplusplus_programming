// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int size = 10;
    for (int i=0; i < size; i++) {

        for (int j = 0; j < size; j++) {
            if (i > j) {
                std::cout << " ";
            }
            else {
                std::cout << "*";
            }
        }
        std::cout << std::endl;
    }
}

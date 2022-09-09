// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{

    int size;
    std::cout << "Provide size of array: "; std::cin >> size; std::cout << std::endl;

    int* p = new int[size];


    delete[]p;

    std::cout << "Provide new size of array: "; std::cin >> size; std::cout << std::endl;

    p = new int[size];

    delete[]p;

    p = nullptr;

}

// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int *create_array_in_heap(int size) {
    int* p = new int[size];

    for (int i = 0; i < size; i++) {
        p[i] = i + 1;
    }

    return p;
}

int main()
{
    int* ptr = create_array_in_heap(5);
    
    std::cout << *ptr << std::endl;

    delete[] ptr;

    ptr = nullptr;
}

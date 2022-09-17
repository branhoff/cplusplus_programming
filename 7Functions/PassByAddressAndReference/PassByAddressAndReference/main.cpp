// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void swap_by_address(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap_by_reference(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;

    std::cout << "Variables x = " << x << " and y = " << y << std::endl;

    swap_by_address(&x, &y);

    std::cout << "After swap by address x = " << x << " and y = " << y << std::endl;

    swap_by_reference(x, y);

    std::cout << "After swap by reference x = " << x << " and y = " << y << std::endl;
    
    return 0;
}

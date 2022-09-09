// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// declaration    -> int *p;
// initialization -> p = &x;
// dereferencing  -> cout << *p;

#include <iostream>

int main()
{
    int x = 10;
    std::cout << "x = " << x << std::endl;
    std::cout << "Address of x = " << &x << std::endl;

    int* p;
    p = &x;

    std::cout << "p is pointing to " << p << std::endl; // address of x
    std::cout << "Address of p = " << &p << std::endl; // address of p

    x = 11;
    std::cout << "x = " << x << std::endl;
    std::cout << "Address of x = " << &x << std::endl;

    std::cout << "p is pointing to " << p << std::endl; // address of x
    std::cout << "Address of p = " << &p << std::endl; // address of p
    std::cout << "Dereferencing from p = " << *p << std::endl; // dereferencing

    int y = 38;
    std::cout << "y = " << y << std::endl;
    std::cout << "Address of y = " << &y << std::endl;

    p = &y;

    std::cout << "p is pointing to " << p << std::endl; // address of x
    std::cout << "Address of p = " << &p << std::endl; // address of p
    std::cout << "Dereferencing from p = " << *p << std::endl; // dereferencing

    return 0;

    
}


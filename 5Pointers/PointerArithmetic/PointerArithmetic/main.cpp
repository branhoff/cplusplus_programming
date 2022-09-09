// PointerArithmetic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int A[5]{ 2, 4, 6, 8, 10 };
    int* p = A, *q = &A[4];

    std::cout << *p << std::endl;

    p++;

    std::cout << *p << std::endl;

    p--;

    std::cout << *p << std::endl;

    std::cout << *(p + 2) << std::endl;

    std::cout << "Distance from p and q is " << p - q << std::endl;

    std::cout << "Loop through Array with pointer" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << *p << std::endl;
        p++;
    }

    return 0;
}


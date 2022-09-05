// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int A[7] = {4, 8, 6, 9, 5, 2, 7};
    int sum = 0;

    for (int i = 0; i < 7; i++) {
        sum += A[i];
        }

    std::cout << "Sum is " << sum;

    return 0;
}

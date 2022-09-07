// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int A[2][3]{ {2, 4, 6}, {3, 6, 9} };

    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {
            std::cout << A[i][j];
        }

        std::cout << std::endl;
    }
}

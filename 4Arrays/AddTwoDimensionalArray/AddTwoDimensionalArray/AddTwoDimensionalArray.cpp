// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int A[2][3]{ {2, 4, 6}, {3, 6, 9} };
    int B[2][3]{ {1, 3, 3}, {2, 3, 0} };
    int C[2][3];

    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
            std::cout << C[i][j];
        }

        std::cout << std::endl;
    }
}

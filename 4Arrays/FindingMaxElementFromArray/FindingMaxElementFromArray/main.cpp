// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int A[7]{4, 8, 6, 9, 5, 2, 7 };
    int max_num = A[0];

    for (int i=0; i < 7; i++) {
        if (max_num < A[i]) {
            max_num = A[i];
        }
    }

    std::cout << "Maximum number is " << max_num;
    
    return 0;
}



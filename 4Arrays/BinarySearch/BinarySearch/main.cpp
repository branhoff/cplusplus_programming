// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int A[10]{6, 12, 15, 17, 20, 22, 25, 28, 30, 35};

    int low = 0; 
    int high = 9;
    int mid;
    int key;

    std::cout << "Please enter key: "; std::cin >> key;
    

    while (high >= low) {

        mid = (low + high) / 2;

        if (key == A[mid]) {
            std::cout << "Key is at A[" << mid << "]";
            return 0;
        }
        else if (key < A[mid]) {
            high = mid - 1;
        }
        else if (key > A[mid]) {
            low = mid + 1;
        }
    }

    std::cout << "Key not found";

    return 0;
}


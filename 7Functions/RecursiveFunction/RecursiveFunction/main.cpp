// RecursiveFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void recursive_function(int n) {

    if (n > 0) {
        std::cout << "Before recursive call n is " << n << std::endl;
        recursive_function(n - 1);
        std::cout << "After recursive call n is " << n << std::endl;
    }



}

int main()
{
    recursive_function(5);
}

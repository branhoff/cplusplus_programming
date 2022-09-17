// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int& return_by_address(int& ref) {
    
    return ref;
}

int main()
{
    int x = 10;
    std::cout << "Variable x is originally = " << x << std::endl;

    return_by_address(x) = 25;

    std::cout << "Variable x is currently = " << x << std::endl;

}

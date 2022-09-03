// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int a, b, c;

    std::cout << "Enter 2 nums:" << std::endl;
    std::cout << "num1: ";  std::cin >> a;
    std::cout << "num2: "; std::cin >> b;

    c = a + b;

    std::cout << "Sum is " << c;
}



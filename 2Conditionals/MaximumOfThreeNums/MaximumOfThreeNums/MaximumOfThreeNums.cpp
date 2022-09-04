// MaximumOfThreeNums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int a, b, c;
    
    std::cout << "Please enter 3 numbers: " << std::endl;

    std::cout << "Num1: "; std::cin >> a;
    std::cout << "Num2: "; std::cin >> b;
    std::cout << "Num3: "; std::cin >> c;

    if (a > b && a > c) {
     std::cout << "Max is " << a;
    }
    else {
        if (b > c) {
            std::cout << "Max is " << b;
        }
        else {
            std::cout << "Max is " << c;
        }
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

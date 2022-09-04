// SwitchDayNumToDayName.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int day_num;

    std::cout << "Please provide day of the week as Number (Mon-Sund :: 1-7)" << std::endl;
    std::cin >> day_num;

    switch (day_num) {
    case 1: std::cout << "Monday";
        break; 
    case 2: std::cout << "Tuesday";
        break;
    case 3: std::cout << "Wednesday";
        break;
    case 4: std::cout << "Thursday";
        break;
    case 5: std::cout << "Friday";
        break;
    case 6: std::cout << "Saturday";
        break;
    case 7: std::cout << "Sunday";
        break;
    default: std::cout << "--Error: Invalid Number--";
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

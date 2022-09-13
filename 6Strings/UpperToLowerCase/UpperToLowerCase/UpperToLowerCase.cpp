// StringIterator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::string str = "";
    std::cout << "Provide a string: "; getline(std::cin, str);

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <=90 ) {
            str[i] += 32;
        }
    }

    std::cout << str << std::endl;

    return 0;
}

// StringIterator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::string str1 = "";
    std::cout << "Provide a string: "; getline(std::cin, str1);

    int count = 0;
    for (int i = 0; str1[i] != '\0'; i++) {
        count++;
    }

    std::cout << count << std::endl;

    count = 0;
    std::string str2 = "";
    std::cout << "Provide a another string: "; getline(std::cin, str2);

    std::string::iterator it;

    for (it = str2.begin(); it != str2.end(); it++) {
        count++;
    }

    std::cout << count << std::endl;


    return 0;
}

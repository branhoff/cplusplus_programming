// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void static_test() {
    static int x = 0;
    int y = 0;

    x++;
    y++;

    std::cout << "Our static variable x is " << x << " while our standard variable y is " << y << std::endl;
}

int main()
{
    for (int i = 0; i < 3; i++) {
        static_test();
    }
}

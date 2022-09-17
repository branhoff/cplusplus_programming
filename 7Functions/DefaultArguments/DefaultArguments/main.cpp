// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int add(int x, int y, int z = 0) {
    return x + y + z;
}


int main()
{
    std::cout << add(3, 2) << std::endl;
    std::cout << add(3, 2, 7) << std::endl;
    
    return 0;
}

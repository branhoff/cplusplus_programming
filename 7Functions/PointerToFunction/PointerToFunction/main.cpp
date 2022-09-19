// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void display() {
    std::cout << "Hello World!\n" << std::endl;
}

int max(int x, int y) {
    return x > y ? x : y;
}

int main()
{
    void (*fp)();

    fp = display;

    (*fp)();

    fp = nullptr;

    int (*fq)(int ,int);

    fq = max;
    std::cout << "Max is " << (*fq)(10, 5) << std::endl;

    fq = nullptr;

}

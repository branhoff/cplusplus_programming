// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Rectangle {
public:
    int length;
    int width;

    int area() {
        return length * width;
    }

    int perimeter() {
        return 2 * length + 2 * width;
    }
};

int main()
{
    Rectangle r1, r2;

    r1.length = 10;
    r1.width = 5;

    std::cout << "The area of r1 is " << r1.area() << std::endl;
    std::cout << "The perimeter of r1 is " << r1.perimeter() << std::endl;

    r2.length = 3;
    r2.width = 8;

    std::cout << "The area of r2 is " << r2.area() << std::endl;
    std::cout << "The perimeter of r2 is " << r2.perimeter() << std::endl;


}

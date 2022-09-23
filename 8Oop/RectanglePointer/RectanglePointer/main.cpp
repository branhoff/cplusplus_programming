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
    Rectangle r1;

    Rectangle* p;

    p = &r1;

    p -> length = 10;
    p -> width = 5;

    std::cout << "The area of r1 is " <<  p -> area() << std::endl;
    std::cout << "The perimeter of r1 is " << p -> perimeter() << std::endl;

    Rectangle* q = new Rectangle;

    q -> length = 3;
    q -> width = 8;

    std::cout << "The area of r2 is " << q -> area() << std::endl;
    std::cout << "The perimeter of r2 is " << q -> perimeter() << std::endl;

    delete q;
    q = nullptr;


}

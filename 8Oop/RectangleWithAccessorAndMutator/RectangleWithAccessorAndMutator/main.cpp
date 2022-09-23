// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Rectangle {
private:

    int length;
    int width;

public:

    int getLength(int l) {
        return length;
    }

    void setLength(int l) {
        length = abs(l);
    }

    int getWidth(int w) {
        return width;
    }

    void setWidth(int w) {
        width = abs(w);
    }

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

    r1.setLength(10);
    r1.setWidth(-5);
    

    std::cout << "The area of r1 is " << r1.area() << std::endl;
    std::cout << "The perimeter of r1 is " << r1.perimeter() << std::endl;

}

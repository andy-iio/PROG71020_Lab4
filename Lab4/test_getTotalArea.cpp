// Testing the total area of ??all the shapes implementation
#include <iostream>
#include "shape.h"
#include "rectangle.h"
#include "circle.h"
#include "getTotalArea.h"

using namespace std;

void test_getTotalArea() {
    // Dynamically creating shapes
    Shape* r1 = new Rectangle(4, 5);  // Area 20 - rectangleArea = length × width
    Shape* r2 = new Rectangle(2, 3);  // Area 6 - rectangleArea = length × width
    Shape* c1 = new Circle(4);      // Area 50 - circleArea = pi.r^2
    Shape* c2 = new Circle(6);      // Area 113 - circleArea = pi.r^2

    // Creating an array to hold shape pointers
    Shape* shapes[4];
    shapes[0] = r1;
    shapes[1] = r2;
    shapes[2] = c1;
    shapes[3] = c2;

    // Calculating the size of the array
    int size = sizeof(shapes) / sizeof(shapes[0]);

    // Calculate total area
    int total_area = getTotalArea(shapes, size);

    // Checking the result and printing
    if (total_area == 189) {
        cout << "\033[32mTest passed!" << "\n\033[0m" << endl;
    }
    else {
        cerr << "\033[1;31mTest failed! Total Area: " << total_area << "\033[0m" << endl;
    }

    // Asking user if they want detailed test results
    cout << "\033[1;31mDo you want to see detailed test results? (y/n): " << "\033[0m";
    char userInput;
    cin >> userInput;

    if (userInput == 'y' || userInput == 'Y') {
        cout << "\nExpected Total Area: 189" << endl;
        cout << "+-----------------------+-------+" << endl;
        cout << "| Shape                 | Area  |" << endl;
        cout << "+-----------------------+-------+" << endl;
        cout << "| Rectangle 1 (4, 5)    | " << r1->calculateArea() << "    |" << endl;
        cout << "| Rectangle 2 (2, 3)    | " << r2->calculateArea() << "     |" << endl;
        cout << "| Circle 1 (4)          | " << c1->calculateArea() << "    |" << endl;
        cout << "| Circle 2 (6)          | " << c2->calculateArea() << "   |" << endl;
        cout << "+-----------------------+-------+" << endl;
        cout << "| Total Area            | " << total_area << "   |" << endl;
        cout << "+-----------------------+-------+" << endl;
        cout << "\033[32mTest passed!\033[0m" << endl;
    }
    else {
        cout << "\033[1;31mGoodbye!\n" << "\033[0m";
    }

    // Freeing dynamically allocated memory
    delete r1;
    delete r2;
    delete c1;
    delete c2;
}
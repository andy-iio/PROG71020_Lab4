// Lab4.cpp 
//Andy Guest | Alexa Bowman | Ceren Askin

#include <iostream>
#include "shape.h"
#include "rectangle.h"
#include "circle.h"
#include "car.h"


int main()
{
	//testing rectangle and circle area & draw
	Rectangle r1(4, 5);
	r1.draw();
	std::cout << "rectangle area is: " << r1.calculateArea() << std::endl;
	
	Circle c1(4);
	c1.draw();
	std::cout << "circle area is: " << c1.calculateArea() << std::endl;

	// testing BMW and Mazada drawing and driving functions
	BMW bmw;
	bmw.draw();
	bmw.drive();

	Mazda mazda;
	mazda.draw();
	mazda.drive();

}
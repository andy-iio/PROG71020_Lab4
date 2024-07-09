#pragma once
#include "shape.h"

//class rectangle, derived from base class shape
class Rectangle : public Shape {
private:
	int length;
	int width;

public:
	//class constructor, requires length and width
	Rectangle(int l, int w) {
		length = l;
		width = w;
	}
	//area of rectangle = length x width
	int calculateArea() {
		return length * width;
	}
	//overriden draw function 
	void draw() override {
		drawItem("rectangle.txt");
	}
};
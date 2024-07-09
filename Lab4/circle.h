#pragma once
#include "shape.h"
#include "draw.h"

//circle class, derived from base class shape
class Circle : public Shape {
private:
	int radius;

public:
	//class constructor
	Circle(int r) {
		radius = r;
	}
	//area caluculation, area of circle = pi * r^2
	int calculateArea() {
		return PI * (radius * radius);
	}

	//ovveridden draw function from base class
	void draw() override {
		drawItem("circle.txt");
	}
};
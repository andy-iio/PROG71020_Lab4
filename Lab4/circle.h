#pragma once
#include "shape.h"
#include "draw.h"

class Circle : public Shape {
private:
	int radius;

public:
	Circle(int r) {
		radius = r;
	}

	int calculateArea() {
		return PI * (radius * radius);
	}

	void draw() override {
		drawItem("circle.txt");
	}
};
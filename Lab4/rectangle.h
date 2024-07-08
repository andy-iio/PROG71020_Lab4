#pragma once
#include "shape.h"

class Rectangle : public Shape {
private:
	int length;
	int width;

public:
	Rectangle(int l, int w) {
		length = l;
		width = w;
	}

	int calculateArea() {
		return length * width;
	}

	void draw() override {
		drawItem("rectangle.txt");
	}
};
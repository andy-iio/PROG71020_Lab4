#pragma once
#include"draw.h"

// Base Class defenition (Cars)
class Cars {
public:
	virtual void draw() = 0;
	virtual void drive() = 0;

};

// Derived Class defenition & Functions for BMW
class BMW : public Cars {
public:
	void draw() override{
		drawItem("bmw.txt");
	}

	void drive() override {
		std::cout << "Driving a BMW\n" << std::endl;
	}
};

// Derived Class defenition & Functions for Mazada
class Mazda : public Cars {
public:
	void draw() override{
		drawItem("mazda.txt");
	}

	void drive() override {
		std::cout << "Driving a Mazda\n" << std::endl;
	}
};

// Global drive function
void drive(Cars& car) {
	car.drive();
}
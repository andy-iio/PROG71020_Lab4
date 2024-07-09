#pragma once

#include <fstream>
#define PI 3.14
#include "draw.h"
//base class shape, has two pure virtual functions that are overridden in the derived classes 
class Shape {
public:
	virtual int calculateArea() =0; //=0 for pure virtual
	virtual void draw() =0; //= 0 for pure virtual
};




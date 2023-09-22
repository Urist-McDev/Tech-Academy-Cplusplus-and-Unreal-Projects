#pragma once
#include "Shape.h"
class Rectangle: public Shape
{
public:
	int height;
	int width;
	void getArea() {
		cout << "The area of this rectangle is: " << height * width;
	}
};


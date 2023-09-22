#pragma once
#include "Shape.h"
class Triangle: public Shape
{
public:
	int base;
	int height;
	void getArea() {
		cout << "The area of the triangle is: " << 0.5 * base * height;
	}
};


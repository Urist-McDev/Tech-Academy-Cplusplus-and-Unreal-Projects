#pragma once
#include<iostream>
#include "Shape.h"
#include <iomanip>
#include <cmath>
class Circle: public Shape
{
public:
	int radius;
	double pi = 3.141592653589793238462643383279502884;
	void getArea() {
		cout << "The area of the circle is: " << pi * radius * radius;
	}
};


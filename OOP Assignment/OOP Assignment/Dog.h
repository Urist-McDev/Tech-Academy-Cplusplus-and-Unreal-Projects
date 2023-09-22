#pragma once
#include <iostream>
#include <string>
using namespace std;
class Dog
{
public:
	string breed;
	string color;
	int height;
	int weight;
	void Shake() {
		cout << "The dog shakes your hand.";
	}
	void Sit() {
		cout << "The dog sits down.";
	}
	void LayDown() {
		cout << "The dog lays down.";
	}
	void ListDog() {
		cout << breed << endl << color << endl << height << endl << weight;
	}
};


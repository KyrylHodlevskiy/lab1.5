#include "Rectangle.h"
#include <iostream>
using namespace std;
void Rectangle::Init(Pair sides)
{
	setsides(sides);
}
void Rectangle::Display() const
{
	cout << endl;
	cout << "sides: " << toString() << endl;

}
void Rectangle::Read()
{
	Pair sides;
	cout << endl;
	sides.Read();
	Init(sides);
}


string Rectangle::toString() const {
	
	return getsides().toString();
}

double Rectangle::Perimeter() const {
	double side1 = getsides().getx();
	double side2 = getsides().gety();
	return side1*2 + side2*2;
}

double Rectangle::Square() const {
    
	return getsides().Multiply();
}
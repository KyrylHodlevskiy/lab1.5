#pragma once
#include "Pair.h"
#include <string>
using namespace std;
class Rectangle
{
protected:
	Pair sides;
public:
	Pair getsides() const { return sides; }
	void setsides(Pair sides) { this->sides = sides; }
	void Init(Pair sides);
	void Display() const;
	void Read();
	double Perimeter() const;
	double Square() const;
	std::string toString() const;
}; 

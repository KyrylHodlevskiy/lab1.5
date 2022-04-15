#pragma once
#include <string>
using namespace std;
class Pair
{
protected:
	double x, y;
public:
	double getx() const { return x; }
	double gety() const { return y; }
	void setx(double x) { this->x = x; }
	void sety(double y) { this->y = y; }
	void Init(double x, double y);
	void Display() const;
	void Read();
	double Multiply() const;
	std::string toString() const;
};


#include "Pair.h"
#include <iostream>
using namespace std;
void Pair::Init(double x, double y)
{
	setx(x);
	sety(y);
}
void Pair::Display() const
{
	cout << endl;
	cout << "sides = " << toString() << endl;
}
void Pair::Read()
{
	double x;
	double y;
	cout << endl;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	Init(x, y);
}

double Pair::Multiply() const{

	return x * y;
}

string Pair::toString() const {
	string str = to_string(x) + ", " + to_string(y);
	return str;
}
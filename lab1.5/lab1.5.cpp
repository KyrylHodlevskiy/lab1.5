#include <iostream>
#include "Pair.h"
#include "Rectangle.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    Pair pair;
    pair.Read();
    pair.Display();
    cout<< "Добуток: " << pair.Multiply() << endl;


    Rectangle rectangle;
    rectangle.Read();
    rectangle.Display();
    cout << "Периметр: " << rectangle.Perimeter() << endl;
    cout << "Площа: " << rectangle.Square() << endl;
}
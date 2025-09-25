#include "Point.h" // файл реализации
#include<iostream>
using namespace std;

Point::Point()
{
	x = 0;
	y = 0;
	cout << "Construct by default\n";
	count++;
}
Point::Point(int a, int b)
{
	x = a;
	y = b;
	count++;
}
void Point::Init(int a, int b)
{
	x = a;
	y = b;
}
void Point::Init()
{
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
}
void Point::Print()
{
	cout << "X: " << x << "\tY: " << y << endl;
}

void Point::PrintCount()
{
	cout << "Count = " << count << endl;
}

int Point::count = 0; // начальная инициализация статик поля
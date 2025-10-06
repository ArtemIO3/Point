#include "Point.h" // файл реализации
#include<iostream>
using namespace std;

Point::Point()
{
	x = 0;
	y = 0;
	cout << "Construct by default\n";
}
Point::Point(int a, int b)
{
	x = a;
	y = b;
	cout << "Construct by 2 params\n";
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

Point Point::operator+(Point& b)// obj.Sum(obj2)'
{
	Point res;
	res.x = this->x + b.x;
	res.y = this->y + b.y;
	return res;
}

Point Point::operator*(Point& b)
{
	Point res;
	res.x = this->x * b.x;
	res.y = this->y * b.y;
	return res;
}

Point Point::operator-(Point& b)
{
	Point res;
	res.x = this->x - b.x;
	res.y = this->y - b.y;
	return res;
}

Point Point::operator/(Point& b)
{
	Point res;
	res.x = this->x / b.x;
	res.y = this->y / b.y;
	return res;
}

int Point::count = 0; // начальная инициализация статик поля
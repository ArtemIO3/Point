#include<iostream>
#include "Point.h"
using namespace std;

int main()
{
	Point a(10, 5), b(3, 4);
	//Point c = ++a;
	//c.Print();
	//a.Print();
	Point c = --a;
	c.Print();
	a.Print();

















	//Point d = a + b; 
	//Point d1 = a.operator+(b);
	//Point d = a.Sum(b);
	/*d1.Print();
	d.Print();*/
	//Point d4 = a * b;
	//d4.Print();
	//Point d2 = b - a;
	//d2.Print();
	//Point d3 = a / b;
	//d3.Print();
	/*Point d4 = a + 10;
	d4.Print();
	if (a > b)
	{
		cout << "a>b\n";
	}
	else if(a < b)
	{
		cout << "a>b\n";
	}
	else if (a == b)
	{
		cout << "a==b\n";
	}
	else if (a != b)
	{
		cout << "a!=b\n";
	}
	else if (a >= b)
	{
		cout << "a>=b\n";
	}
	else if (a <= b)
	{
		cout << "a<=b\n";
	}*/
}
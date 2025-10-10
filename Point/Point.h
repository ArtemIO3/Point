#pragma once// файл дизайна
class Point
{ 
	// реализация класса
	int x;
	int y;
public:// интерфейс класса, прототипы методов
	Point();
	Point(int a, int b);
	void Init(int a, int b);
	void Init();  // ввод с клавиатуры
	void Print();

	static int count; // создаем статическое поле
	Point operator+(Point& b);
	Point operator*(Point& b);
	Point operator-(Point& b);
	Point operator/(Point& b);
	Point operator+(int a);
	bool operator >(Point& b);
	bool operator <(Point& b);
	bool operator ==(Point& b);
	bool operator !=(Point& b);
	bool operator >=(Point& b);
	bool operator <=(Point& b);
	Point& operator++();//++a
	Point& operator--();
};


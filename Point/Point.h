#pragma once// ���� �������
class Point
{ 
	// ���������� ������
	int x;
	int y;
public:// ��������� ������, ��������� �������
	Point();
	Point(int a, int b);
	void Init(int a, int b);
	void Init();  // ���� � ����������
	void Print();

	static int count; // ������� ����������� ����
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


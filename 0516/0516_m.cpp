// 실습 2 상속 사용해보기
#include <iostream>
using namespace std;

class Shape
{

public:
	int n_num;
	double n_cm;

	Shape() {}

	Shape(int num, double cm)
	{
		n_num = num;
		n_cm = cm;
	}

	void printInfo()
	{
		cout << "변의 개수 : " << n_num << endl;
		cout << "밑변의 길이 : " << n_cm << endl;
	}
};

class Rectangle : public Shape
{
public:
	double n_length;
	Rectangle(double length, double cm)
	{
		n_num = 4;
		n_length = length;
		n_cm = cm;
	}
	
	void Recarea()
	{
		cout << "사각형 넓이 : " << n_cm * n_length << endl;
	}
	void printInfo()
	{
		Shape::printInfo();
		Recarea();
	}
};

class Triangle : public Shape
{
public:
	double n_height;

	Triangle(double height, double cm)
	{
		n_num = 3;
		n_height = height;
		n_cm = cm;
	}
	
	void Triarea()
	{
		cout << "삼각형 넓이 : " << (n_cm * n_height) / 2 << endl;
	}

	void printInfo()
	{
		Shape::printInfo();
		Triarea();
	}
};

void main()
{
	Rectangle rect(3, 10);
	rect.printInfo();

	cout << endl;

	Triangle tri(4, 25);
	tri.printInfo();

}
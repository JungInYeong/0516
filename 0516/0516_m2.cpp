// 실습 3 상속 사용해보기
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
	void printInfo(double w, double h)
	{
		n_cm = w;
		n_length = h;

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

	void printInfo() //오버라이딩 - 상속, 부모 메소드, 출력 입력 이름 같아야함
	{
		Shape::printInfo();
		Triarea();
	}

	void printInfo(double w, double h) //오버 로딩 - 메소드 식별자, 출력, 입력(x)
	{
		n_cm = w;
		n_height = h;

		Shape::printInfo();
		Triarea();
	}
};

void main()
{
	Rectangle rect(3, 10);
	rect.printInfo();
	cout << endl;
	rect.printInfo(4, 20);
	
	cout << endl;

	Triangle tri(4, 25);
	tri.printInfo();
	cout << endl;
	tri.printInfo(5, 28);

}
// �ǽ� 3 ��� ����غ���
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
		cout << "���� ���� : " << n_num << endl;
		cout << "�غ��� ���� : " << n_cm << endl;
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
		cout << "�簢�� ���� : " << n_cm * n_length << endl;
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
		cout << "�ﰢ�� ���� : " << (n_cm * n_height) / 2 << endl;
	}

	void printInfo() //�������̵� - ���, �θ� �޼ҵ�, ��� �Է� �̸� ���ƾ���
	{
		Shape::printInfo();
		Triarea();
	}

	void printInfo(double w, double h) //���� �ε� - �޼ҵ� �ĺ���, ���, �Է�(x)
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
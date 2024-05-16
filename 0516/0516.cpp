// �ǽ� 1 ��� ����غ���
#include <iostream>
using namespace std;

class Shape
{
	

public:
	int n_num;
	double n_cm;

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
	Rectangle(double length, double cm) : Shape(n_num, n_cm)
	{
		n_num = 4;
		n_length = length;
		n_cm = cm;
	}
	void Recarea()
	{
		cout << "�簢�� ���� : " << n_cm * n_length << endl;
	}

};

class Triangle : public Shape
{
public:
	double n_height;

	Triangle(double height, double cm) : Shape(n_num, n_cm)
	{
		n_num = 3;
		n_height = height;
		n_cm = cm;
	}

	void Triarea()
	{
		cout << "�ﰢ�� ���� : " << (n_cm * n_height) / 2 << endl;
	}

};

void main()
{
	Rectangle rect(3, 10);
	rect.printInfo();
	rect.Recarea();

	Triangle tri(4, 25);
	tri.printInfo();
	tri.Triarea();
}
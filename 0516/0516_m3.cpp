// 실습 1 추상 클래스

#include <iostream>
using namespace std;

class Shape 
{
protected :
	virtual void draw() = 0;
};

class Circle : public Shape
{
public:
	void draw() override { cout << "원" << endl; }

};

class Rect : public Shape
{
public :

	void draw() override { cout << "사각형" << endl; }

};

class Triangle : public Shape
{
public :
	void draw() override { cout << "삼각형" << endl; }

};

void main()
{
	Circle circle;
	Rect rect;
	Triangle tri;

	circle.draw();
	rect.draw();
	tri.draw();

}
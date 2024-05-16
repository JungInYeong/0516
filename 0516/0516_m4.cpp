// 실습2
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Snack
{
public:
	int m_price;
	string m_name;
	string m_company;
	Snack() {};
	Snack(int price, int name, string company)
	{
		m_price = price;
		m_name = name;
		m_company = company;
	}

	string getName() { return m_name; }
};

class Candy : public Snack
{
public:
	string m_taste;
	
	Candy(int price, string name, string company, string taste)
	{
		m_price = price;
		m_name = name;
		m_company = company;
		m_taste = taste;
	}
};

class Chocolate : public Snack
{
public:
	string m_shape;

	Chocolate(int price, string name, string company, string shape)
	{
		m_price = price;
		m_name = name;
		m_company = company;
		m_shape = shape;
	}
};

void main()
{
	vector<string> snackBasket;

	Candy candy(1000, "딸기사탕", "츄파춥스", "Sweet");
	Chocolate chocolate(2000, "가나초코", "가나", "DarkChoco");

	snackBasket.push_back(candy.getName());
	snackBasket.push_back(chocolate.getName());

	for (auto& name : snackBasket)
	{
		cout << name << endl;
	}
}
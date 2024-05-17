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

	virtual void name() = 0;

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
	void name() override { cout << "상품이름 : " << m_name << endl; }
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
	void name() override { cout << "상품이름 :" << m_name << endl; }
};

int main()
{
	Snack* candy1 = new Candy(1000, "딸기사탕", "츄파춥스", "Sweet");
	Snack* candy2 = new Candy(500, "초코사탕", "롤리팝", "롤리");
	Snack* chocolate1 = new Chocolate(2000, "가나초코", "가나", "DarkChoco");
	Snack* chocolate2 = new Chocolate(1500, "페레로로쉐", "페레로", "초코");
	
	Snack* snackbasket[4] = { candy1, candy2, chocolate1, chocolate2 };

	for (int i = 0; i < sizeof(snackbasket) / sizeof(snackbasket[0]); i++)
	{
		snackbasket[i]->name();
	}
	

	return 0;
}

/*
heap 
-> 프로그램이 실행되는 중에 사용되는 메모리
-> 100% 사용자가 고나리 (new, delete)
-> 조금 더 느림

stack
->프로그램 실행 전 할당 메모리
->new 키워드 외 모든것
->조금 더 빠름, 운영체제 별로 메모리 용량 한계
*/
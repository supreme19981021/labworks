//example5_10.cpp:���ؼ̳��У�ֱ�ӻ�����ͬ����Ա

#include<iostream>
using namespace std;

class Base1
{
protected:
	int a;
public:
	Base1(int x)
	{
		a = x;
		cout << "Base1 a=" << a << endl;
	}
};

class Base2
{
protected:
	int a;
public:
	Base2(int x)
	{
		a = x;
		cout << "Base2 a=" << a << endl;
	}
};

class Derived :public Base1, public Base2
{
public:
	Derived(int x, int y) :Base1(x), Base2(y)
	{
		Base1::a *= 2;  //�ı��Base1�м̳е����ݳ�Աa��ֵ
		Base2::a *= 2;  //�ı��Base2�м̳е����ݳ�Աa��ֵ
		cout << "Derived from Base1::a=";
		cout << Base1::a << endl;
		cout << "Derived from Base2::a=";
		cout << Base2::a << endl;
	}
};

int main()
{
	Derived obj(10, 20);
	system("pause");
	return 0;
}
//example5_04.cpp:单继承示例

#include<iostream>
using namespace std;

class Base  //基类
{
private:
	int b1;
protected:
	int b2;
public:
	void set(int m, int n)
	{
		b1 = m;
		b2 = n;
	}
	void show()
	{
		cout << "b1=" << b1 << endl;
		cout << "b2=" << b2 << endl;
	}
};

class Derived :public Base  //声明一个公有派生类
{
private:
	int d;
public:
	void setall(int m, int n, int l)
	{
		set(m, n);
		d = l;
	}
	void showall()
	{
		//cout<<"b1="<<b1<<endl;  //无法访问基类的私有成员b1
		cout<<"b2="<<b2<<endl;  //可以访问基类的保护成员b2
		show();
		cout << "d=" << d << endl;
	}
};

int main()
{
	Derived obj;
	obj.setall(30, 40, 50);
	obj.show();
	obj.showall();
	system("pause"); 
	return 0;
}
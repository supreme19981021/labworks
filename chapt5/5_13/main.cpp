//example5_13.cpp:赋值兼容规则示例

#include<iostream>
using namespace std;

class Base
{
	int b;
public:
	Base(int x) :b(x) {}
	int getb()
	{
		return b;
	}
};

class Derived :public Base
{
	int d;
public:
	Derived(int x, int y) :Base(x), d(y) {}
	int getd()
	{
		return d;
	}
};

int main()
{
	Base b1(11);
	Derived d1(22, 33);
	b1 = d1;  //第1种赋值兼容
	cout << "b1.getb() = " << b1.getb() << endl;
	//cout<<"b1.getd() = "<<b1.getd()<<endl; //不能访问派生类中的新生成员
	Base *pb1 = &d1;  //第2种赋值兼容 
	cout << "pb1->getb() = " << pb1->getb() << endl;
	//cout<<"pb1->getd() = "<<pb1->getd()<<endl; //不能访问派生类中的新生成员
	Derived *pd = &d1;
	Base *pb2 = pd;  //第3种赋值兼容 
	cout << "pb2->getb() = " << pb2->getb() << endl;
	//cout << "pb2->getd() = " << pb2->getd() << endl; //不能访问派生类中的新生成员
	Base &rb = d1;  //第4种赋值兼容 
	cout << "rb.getb() = " << rb.getb() << endl;
	//cout << "rb.getd() = " << rb.getd() << endl; //不能访问派生类中的新生成员
	system("pause");
	return 0;
}
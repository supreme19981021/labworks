//example5_06.cpp:���̳�������ʱ���캯�������������ĵĵ��ô���

#include<iostream>
using namespace std;

class Member
{
public:
	Member()
	{
		cout << "constructing Member\n";
	}
	~Member()
	{
		cout << "destructing Member\n";
	}
};

class Base
{
public:
	Base()
	{
		cout << "constructing Base\n";
	}
	~Base()
	{
		cout << "destructing Base\n";
	}
};

class Derived :public Base  //�̳�
{
private:
	Member mem;   //�����Ա
public:
	Derived()
	{
		cout << "constructing Derived\n";
	}
	~Derived()
	{
		cout << "destructing Derived\n";
	}
};

int main()
{
	Derived obj;
	system("pause"); 
	return 0;
}
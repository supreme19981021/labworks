//example5_01.cpp:�����Ա�Ĺ���������

#include<iostream>
using namespace std;

class A
{
public:
	A()
	{
		cout << "����A" << endl;
	}
	~A()
	{
		cout << "����A" << endl;
	}
};

class B
{
public:
	B()
	{
		cout << "����B" << endl;
	}
	~B()
	{
		cout << "����B" << endl;
	}
private:
	A a;   //�����Ա��B�������A��
};

int main()
{
	B obj;
	system("pause");
	return 0;
}
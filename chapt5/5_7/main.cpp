//example5_07.cpp:���๹�캯�����þ���

#include<iostream>
using namespace std;

class Base
{
private:
	int x;
public:
	Base(int i)
	{
		x = i;
		cout << "constructing Base\n";
	}
	void show()
	{
		cout << "x=" << x << endl;
	}
};

class Derived :public Base
{
private:
	Base d;  //Base��Ķ����Ա
public:
	Derived(int i) :Base(i), d(i)  //���๹�캯���Ͷ����Ա���캯���ĵ���
	{
		cout << "constructing Derived\n";
	}
};

int main()
{
	Derived obj(100);
	obj.show();
	system("pause");
	return 0;
}
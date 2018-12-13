//example5_11.cpp:���̳��У��������й�ͬ�����Ȼ���

#include<iostream>
using namespace std;

class Base
{
protected:
	int a;
public:
	Base(int x) :a(x)
	{
		cout << "Base a = " << a << endl;
	}
	~Base()
	{
		cout << "Destructing Base" << endl;
	}
};

class Base1 :public Base
{
protected:
	int b;
public:
	Base1(int x, int y) :Base(y), b(x)
	{
		cout << "Base1 from Base a = " << a << endl;
		cout << "Base1 b = " << b << endl;
	}
	~Base1()
	{
		cout << "Destructing Base1" << endl;
	}
};

class Base2 :public Base
{
protected:
	int c;
public:
	Base2(int x, int y) :Base(y), c(x)
	{
		cout << "Base2 from Base a = " << a << endl;
		cout << "Base2 c = " << c << endl;
	}
	~Base2()
	{
		cout << "Destructing Base2" << endl;
	}
};

class Derived :public Base1, public Base2
{
public:
	Derived(int x, int y) :Base1(x, y), Base2(2 * x, 2 * y)
	{
		cout << "Derived from Base1::a = ";
		cout << Base1::a << endl;
		cout << "Derived from Base2::a = ";
		cout << Base2::a << endl;
		cout << "Derived from Base1 b= ";
		cout << b << endl;   //����̳е�b
		cout << "Derived from Base2 c= ";
		cout << c << endl;   //����̳е�c
		//cout<<a<<endl;     //�����ж����ԣ��﷨��鲻ͨ��
		//cout<<Base::a<<endl;    //�����ж����ԣ��﷨��鲻ͨ��
	}
	~Derived()
	{
		cout << "Destructing Derived" << endl;
	}
};

int main()
{
	Derived obj(10, 20);
	system("pause");
	return 0;
}
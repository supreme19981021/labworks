//example5_04.cpp:���̳�ʾ��

#include<iostream>
using namespace std;

class Base  //����
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

class Derived :public Base  //����һ������������
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
		//cout<<"b1="<<b1<<endl;  //�޷����ʻ����˽�г�Աb1
		cout<<"b2="<<b2<<endl;  //���Է��ʻ���ı�����Աb2
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
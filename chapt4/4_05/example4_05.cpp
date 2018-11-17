#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cstring>

using namespace std;

class Person
{
private:
	int age;
	char *name;
public:
	Person(int n = 1,const char *na = "Zhuli"); //构造函数
	~Person();
	void Print();  //重载函数，用于输出普通成员函数
	void Print() const;  //重载函数，用于输出常成员函数，const参与重载
	void ModifyAge();   //用于修改年龄的普通成员函数
};
Person::Person(int n,const char *na)
{
	age = n;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
}
Person::~Person()
{
	delete[]name;
}
void Person::Print()
{
	cout << "age:" << age << " name:" << name << endl;
	cout << "This is general Print()." << endl;
}
void Person::Print() const
{
	cout << "age:" << age << " name:" << name << endl;
	cout << "This is const Print()." << endl;
}
void Person::ModifyAge()
{
	age++;
}
int main()
{
	const Person p1(17, "wu");
	cout << "Output const object p1" << endl;
	p1.Print();
	Person p2(18, "zhang");
	cout << "Output const object p2" << endl;
	p2.ModifyAge();
	p2.Print();
	system("pause");
	return 0;
}
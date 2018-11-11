//Date3.h头文件：定义Date类，其中定义了拷贝构造函数

#include <iostream>

using namespace std;

class Date
{
	int year, month, day;                  //数据成员默认为是私有属性
public:                                    //下一行为普通构造函数声明
	Date(int y = 2018, int m = 10, int d = 27);
	Date(const Date &date);                //拷贝构造函数声明
	int GetYear();
	int GetMonth();
	int GetDay();
	void Display();                        //普通成员函数，输出数据成员的值
};

Date::Date(int y, int m, int d)            //普通构造函数的定义
{
	year = y;
	month = m;
	day = d;
	cout << "Constructor called.\n";
}

Date::Date(const Date &date)               //拷贝构造函数的声明
{
	year = date.year;
	month = date.month;
	day = date.day;
	cout << "Copy Constructor called.\n";
}

int Date::GetYear()                        //公有成员函数，提取year变量值
{
	return year;
}

int Date::GetMonth()                       //公有成员函数，提取month变量值
{
	return month;
}

int Date::GetDay()                         //公有成员函数，提取day变量值
{
	return day;
}

void Date::Display()                       //输出函数的定义
{
	cout << year << "-" << month << "-" << day << endl;
}
#pragma once

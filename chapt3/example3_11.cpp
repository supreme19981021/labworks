//example3_11.cpp文件：在3种情况下调用拷贝构造函数示例，包含文件Date3.h

#include"Date3.h"

Date f(Date Q)                             //普通函数，以类对象作为值形式参数
{
	Date R(Q);                    //第1种调用拷贝构造函数情况，对应第6行输出
	return Q;                     //第3种调用拷贝构造函数情况，对应第7行输出
}                                                 //普通函数结束，对象Q、R生命周期结束

int main()                                   //对应第1、2次析构函数的调用
{
	Date day1(2011, 5, 26);       //调用普通构造函数，对应第1行输出
	Date day3;                         //调用普通构造函数，对应第2行输出
	Date day2(day1);               //第一种调用拷贝构造函数情况，对应第3行输出
	Date day4 = day2;             //对应第4行输出，此语句等效于Date day4(day2);
	day3 = day2;                    //此语句为赋值语句，不调用任何构造函数
	day3 = f(day2);                 //第2种调用拷贝构造函数情况，对应第5行输出
	day3.Display();
	system("pause");
}

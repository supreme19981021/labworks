//exmaple3_12.cpp:构造函数与析构函数的调用顺序
#include<iostream>
using namespace std;
#include"Date4.h"
int main()
{
    Date today;
    Date newday(2011,10,18);
    newday.Display();
    return 0;
}

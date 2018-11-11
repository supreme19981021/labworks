//example3_21.cpp文件：对象引用作为函数的返回值使用示例，包含头文件Date5.h
#include"Date5.h"
Date &Fun(Date &pDate)
{
    pDate.ModifyDate(2012,5,1);
    cout<<"reference pDate:\n";
    pDate.Display();
    return pDate;
}
int main()
{
    Date DateA(2011),tDate;
    cout<<"Before right Fun,DateA:\n";
    DateA.Display();
    cout<<"Before right Fun,tDate:\n";
    tDate.Display();
    tDate=Fun(DateA);
    cout<<"After right Fun,DateA:\n";
    DateA.Display();
    cout<<"After right Fun,tDate:\n";
    tDate.Display();
    Fun(DateA)=Date(1998,10,5);
    cout<<"After right Fun,DateA:\n";
    DateA.Display();
    cout<<"After left Fun,tDate:\n";
    tDate.Display();
    return 0;
}

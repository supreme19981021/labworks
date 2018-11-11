//example3_20.cpp文件：对象引用作为形式参数的使用示例，包含头文件Date5.h
#include"Date5.h"
void Fun(Date &pDate)
{
    pDate.ModifyDate(2011,11,1);
    pDate.Display();
}
int main()
{
    Date DateA(2010);
    DateA.Display();
    Fun(DateA);
    cout<<"after calling fun() DateA:";
    DateA.Display();
    return 0;
}

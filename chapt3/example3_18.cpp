//example3_18.cpp文件：对象作为值形式参数的单向值传递方法，包含头文件Date5.h
#include"Date5.h"
void Fun(Date DateVar)
{
    DateVar.ModifyDate(2011,11,1);
    DateVar.Display();
}
int main()
{
    Date DateA;
    DateA.Display();
    Fun(DateA);
    cout<<"after calling fun() DateA:";
    DateA.Display();
    return 0;
}

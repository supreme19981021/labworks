//example3_15.cpp文件：Date类的对象数组、指针的使用示例，包含文件Date4.h
#include"Date4.h"
int main()
{
    Date array[3]={Date(2011,5,1),Date(2011,10,1)};
    Date *p=array;
    for(;p<array+3;p++)
        p->Display();
    return 0;
}

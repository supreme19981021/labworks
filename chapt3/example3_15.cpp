//example3_15.cpp�ļ���Date��Ķ������顢ָ���ʹ��ʾ���������ļ�Date4.h
#include"Date4.h"
int main()
{
    Date array[3]={Date(2011,5,1),Date(2011,10,1)};
    Date *p=array;
    for(;p<array+3;p++)
        p->Display();
    return 0;
}

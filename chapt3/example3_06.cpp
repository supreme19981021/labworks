//example3_06.cpp��ָ�������ʽ��Ӧ�þ���
#include"Date1.h"
int main()
{
    Date today,*t;
    today.SetDate(2006,10,17);
    cout<<"One day is:";
    today.Display();
    t=&today;
    t->SetDate(2007,12,18);
    cout<<"the other day is:";
    t->Display();
    return 0;
}

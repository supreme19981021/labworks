//example2_09.cpp:���غ���ʾ��
#include <iostream>

using namespace std;

int square(int x)
{
    return x*x;
}
float square(float x)
{
    return x*x;
}
double square(double x=1.5)
{
    return x*x;
}
int main()
{
    cout<<"square()="<<square()<<endl;        //���õ�3�汾��������Ĭ��ֵ�����Ϊ2.25
    cout<<"square(10)="<<square(10)<<endl;    //���õ�1�汾���������Ϊ100
    cout<<"square(2.5f)="<<square(2.5f)<<endl;//���õ�2�汾���������Ϊ6.25
    cout<<"square(1.1)="<<square(1.1)<<endl;  //���õ�3�汾���������Ϊ1.21
    return 0;
}

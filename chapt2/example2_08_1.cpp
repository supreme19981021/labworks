//example2_08_1.cpp:�ú궨��ʵ���������
#include <iostream>

using namespace std;

#define Multiply(x,y)  x*y    //ע�⣺�˴�x��y����δ������
int main()
{
    int a=Multiply(3+4,2+3);   //չ����Ϊ:int a=3+4*2+3
    cout<<"a="<<a<<endl;
    return 0;
}
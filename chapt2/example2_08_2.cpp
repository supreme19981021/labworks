//example2_08_2.cpp:����������ʵ���������
#include <iostream>

using namespace std;

inline int Multiply(int x,int y)
{
    return x*y;
}
int main()
{
    int a=Multiply(3+4,2+3);
    cout<<"a="<<a<<endl;
    return 0;
}
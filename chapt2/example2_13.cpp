//example2_13.cpp:���÷��غ����Ķ��弰3�ֵ���ʾ��
#include <iostream>

using namespace std;

int& Fun(const int &x,int &y,int z)
{
    z++;
    y=x+y+z;
    return y;
}
int main()
{
    int a=1,b=2,c=3,d=0;
    cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<endl;
    Fun(a,b,c);
    cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<endl;
    d=Fun(a,b,c);
    cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<endl;
    Fun(a,b,c)=20;
    cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<endl;
    return 0;
}

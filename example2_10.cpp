//example2_10.cpp:���õ�������ʹ��ʾ��
#include <iostream>

using namespace std;

int x=5,y=10;
int &r=x;
void print()
{
    cout<<"x="<<x<<" y="<<y<<" r="<<r<<endl;     //���x��y��r��ֵ
    cout<<"Address of x"<<&x<<endl;              //�������x���ڴ��ַ
    cout<<"Address of y"<<&y<<endl;
    cout<<"Address of r"<<&r<<endl;
}
int main()
{
    print();
    r=y;
    y=100;
    print();
    return 0;
}

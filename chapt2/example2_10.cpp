//example2_10.cpp:引用的声明及使用示例
#include <iostream>

using namespace std;

int x=5,y=10;
int &r=x;
void print()
{
    cout<<"x="<<x<<" y="<<y<<" r="<<r<<endl;     //输出x、y、r的值
    cout<<"Address of x"<<&x<<endl;              //输出变量x的内存地址
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

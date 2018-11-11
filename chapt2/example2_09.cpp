//example2_09.cpp:重载函数示例
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
    cout<<"square()="<<square()<<endl;        //调用第3版本函数，用默认值，结果为2.25
    cout<<"square(10)="<<square(10)<<endl;    //调用第1版本函数，结果为100
    cout<<"square(2.5f)="<<square(2.5f)<<endl;//调用第2版本函数，结果为6.25
    cout<<"square(1.1)="<<square(1.1)<<endl;  //调用第3版本函数，结果为1.21
    return 0;
}

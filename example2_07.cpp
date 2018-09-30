//example2_07.cpp:形式参数带默认参数值的函数定义及调用示例
#include <iostream>

using namespace std;

void Fun(int i,int j=5,int k=10);
int main()
{
    Fun(20);
    Fun(20,30);
    Fun(20,30,40);
    return 0;
}
void Fun(int i,int j,int k)
{
    cout<<i<<" "<<j<<" "<<k<<endl;
}

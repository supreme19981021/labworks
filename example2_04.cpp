//example2_04.cpp:名字空间使用示例
#include <iostream>

using namespace std;

namespace one
{
    const int M=200;
    int inf=10;
}
namespace two
{
    int x;
    int inf=-100;
}
using namespace one;
int main()
{
    using two::x;
    x=-100;
    cout<<inf<<endl;
    cout<<M<<endl;
    two::inf*=2;
    cout<<two::inf<<endl;
    cout<<x<<endl;
    return 0;
}

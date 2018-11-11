//example3_09.cpp:构造函数应用举例
#include<iostream>
using namespace std;
class Date
{
private:
    int year,month,day;
public:
    Date(int ,int ,int );
    void Display();
};
Date::Date(int y,int m,int d)
{
    cout<<"Executing constructor...\n";
    year=y;
    month=m;
    day=d;
}
void Date::Display()
{
    cout<<year<<"-"<<month<<"-"<<day<<endl;
}
int main()
{
    Date today(2006,10,17);
    cout<<"Today is:";
    today.Display();
    return 0;
}

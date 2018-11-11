//example3_25.cpp:友元类的应用，本例中Student类作为Date的友元类
#include<iostream>
#include<cstring>
using namespace std;
class Student;
class Date
{
    int year,month,day;
public:
    Date(int ,int ,int );
    void Display();
    friend Student;
};
class Student
{
private:
    char *specialty;
    char *name;
public:
    Student(char *pn,char *pSpec);
    ~Student();
    void Display(Date &);
};
Date::Date(int y,int m,int d):year(y),month(m),day(d)
{ }
void Date::Display()
{
    cout<<year<<"-"<<month<<"-"<<day<<endl;
}
Student::Student(char *pn,char *pSpec)
{
    if(pSpec)
    {
        specialty=new char[strlen(pSpec)+1];
        strcpy(specialty,pSpec);
    }
    else
        specialty=0;
    if(pn)
    {
        name=new char[strlen(pn)+1];
        strcpy(name,pn);
    }
    else
        name=0;
}
Student::~Student()
{
    if(specialty)
        delete []specialty;
    if(name)
        delete []name;
}
void Student::Display(Date& obj)
{
    cout<<name<<endl;
    cout<<specialty<<endl;
    obj.Display();
    cout<<"Date's another format is:";
    cout<<obj.month<<"_"<<obj.day<<"_"<<obj.year<<endl;
}
int main()
{
    Student boy("zhang","computer");
    Date birthday(1990,10,17);
    boy.Display(birthday);
    return 0;
}

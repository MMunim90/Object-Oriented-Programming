#include<iostream>
#include<conio.h>
using namespace std;

class person
{
public:
    string name;
    int age;

    void display1()
    {
        cout<<"Name: "<<name<<"\n"<<"Age: "<<age<<endl;
    }
};

class student: public person
{
public:
    int id;

    void display2()
    {
        display1();
        cout<<"ID: "<<id<<endl;
    }
};

int main()
{
    student s1;
    s1.id = 3802;
    s1.name = "Munim";
    s1.age = 23;
    s1.display2();

    getch();
}

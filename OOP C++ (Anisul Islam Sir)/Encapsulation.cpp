/*#include<iostream>
#include<conio.h>

using namespace std;
class student
{
   private:
       string name;
   public:
    void setname(string x)
    {
        name = x;
    }
    string getname()
    {
        return name;
    }
};

int main()
{
    student s1;
    s1. setname("munim");
    cout<<s1.getname();
    getch();
}*/


//this keyword
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

class student
{
public:
    string name;

    student(string name)
    {
        this -> name = name;
    }

    void display()
    {
        cout<<name<<endl;
    }
};
int main()
{
    student s1("munim");
    s1.display();

    getch();
}

/*#include<iostream>
#include<conio.h>
using namespace std;


class mobileuser
{
public:
    void call()
    {
        cout << "hello!" <<endl;
    }
    virtual void sendmessage() = 0;
};

class rahim : public mobileuser
{
public:
    void sendmessage()
    {
        cout<<"hi, this is rahim"<<endl;
    }

};

class karim : public mobileuser
{
public:
    void sendmessage()
    {
        cout<<"hi, this is karim"<<endl;
    }
};

int main()
{
    mobileuser *m;
    rahim r;
    karim k;

    m = &r;
    m->call();
    m->sendmessage();

    m = &k;
    m->sendmessage();

    getch();
}*/


#include<iostream>
#include<conio.h>
using namespace std;


class a
{
private:
    int id = 101;
    string name = "munim";

public:
    friend class b;
};

class b
{
public:
    void display(a ob)
    {
        cout<<ob.id<<endl;
        cout<<ob.name<<endl;
    }
};

int main()
{
    a ob1;
    b ob2;

    ob2.display(ob1);

    getch();
}

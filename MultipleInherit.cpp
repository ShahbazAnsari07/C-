#include<iostream>
using namespace std;

class Parent1
{
    public:

    void par1()
    {
        cout << "This is Parent 1" << endl;
    }
};

class Parent2
{
    public:

    void par2()
    {
        cout << "This is Parent 2" << endl;
    }
};

class Child:public Parent1, public Parent2
{
    public:

    void show_Child()
    {
        cout << "I am the Child derived from both parents" << endl;
    }
};

int main()
{
    Child ob;

    ob.par1();
    ob.par2();
    ob.show_Child();

    return 0;
}


#include<iostream>
using namespace std;

class A {

    public:

    void display() {
        {cout << "Super class display function\n";}
    }
};

class B:public A
{
    public:
    void show()
    {
        {cout << "Subclass function";}
    }
};

int main()
{
    B ob;
    ob.show();
    ob.display();

    return 0;
}
#include<iostream>
using namespace std;

class A
{
    public:

    void display()
    {
        cout << "This is SuperClass" << endl;
    }
};

class B:public A
{
    public:

    void show()
    {
        cout << "This is IntermediateClass" << endl;
    }
};

class C:public B
{
    public:

    void print()
    {
        cout << "This is a SubClass" << endl;
    }
};

int main()
{
    C obj;
    obj.display();
    obj.show();
    obj.print();

    return 0;
}

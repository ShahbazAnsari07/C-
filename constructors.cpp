#include<iostream>
using namespace std;

class add {

    public:

    int a;
    int b;

    add(int x, int y) {            //Parametrized Constructor Declaration.//
        a = x;
        b = y;
    }

    void print() {
        cout << "a: " << a;
        cout << "\nb: " << b;
    }
};

int main() {

    add obj(10,40);
    obj.print();
    
    return 0;
}

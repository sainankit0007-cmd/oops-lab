#include <iostream>
using namespace std;

class Base {

public:
    virtual void display() {
        cout << "Base Class Function" << endl;
    }
};

class Derived : public Base {

public:
    void display() override {
        cout << "Derived Class Function" << endl;
    }
};

int main() {

    Base *ptr;
    Derived d;

    ptr = &d;

    ptr->display();

    return 0;
}

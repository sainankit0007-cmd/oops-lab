#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Single Inheritance" << endl;
    }
};

class C {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

class D : public A, public C {
public:
    void showD() {
        cout << "Multiple Inheritance" << endl;
    }
};

int main() {

    B obj1;
    obj1.showA();
    obj1.showB();

    D obj2;
    obj2.showA();
    obj2.showC();
    obj2.showD();

    return 0;
}

#include <iostream>
using namespace std;

class Number {

    int value;

public:

    Number(int v = 0) {
        value = v;
    }

    Number operator +(Number obj) {
        return Number(value + obj.value);
    }

    Number operator -(Number obj) {
        return Number(value - obj.value);
    }

    Number operator ++() {
        ++value;
        return Number(value);
    }

    bool operator ==(Number obj) {
        return value == obj.value;
    }

    friend ostream& operator <<(ostream &out, Number obj);
};

ostream& operator <<(ostream &out, Number obj) {
    out << obj.value;
    return out;
}

int main() {

    Number n1(20), n2(10), n3;

    n3 = n1 + n2;
    cout << "Addition : " << n3 << endl;

    n3 = n1 - n2;
    cout << "Subtraction : " << n3 << endl;

    ++n1;
    cout << "Increment : " << n1 << endl;

    if(n1 == n2)
        cout << "Equal" << endl;
    else
        cout << "Not Equal" << endl;

    return 0;
}

#include <iostream>
using namespace std;

class Number {
    int value;

public:

    Number() {
        value = 0;
        cout << "Default Constructor : " << value << endl;
    }

    Number(int x) {
        value = x;
        cout << "Parameterized Constructor : "
             << value << endl;
    }

    Number(Number &obj) {
        value = obj.value;
        cout << "Copy Constructor : "
             << value << endl;
    }
};

int main() {

    Number n1;
    Number n2(50);
    Number n3(n2);

    return 0;
}

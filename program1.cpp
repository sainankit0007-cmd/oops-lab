#include <iostream>
using namespace std;

inline float add(float a, float b) {
    return a + b;
}

inline float subtract(float a, float b) {
    return a - b;
}

inline float multiply(float a, float b) {
    return a * b;
}

inline float divideNum(float a, float b) {
    return a / b;
}

int main() {
    float x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Addition       : " << add(x, y) << endl;
    cout << "Subtraction    : " << subtract(x, y) << endl;
    cout << "Multiplication : " << multiply(x, y) << endl;

    if(y != 0)
        cout << "Division       : " << divideNum(x, y) << endl;
    else
        cout << "Division not possible" << endl;

    return 0;
}

#include <iostream>
using namespace std;

int calculate(int a, int b) {
    return a + b;
}

float calculate(float r) {
    return 3.14 * r * r;
}

float calculate(float l, float b, float h) {
    return l * b * h;
}

int main() {

    cout << "Sum of 10 and 20          : "
         << calculate(10, 20) << endl;

    cout << "Area of Circle (r=5)      : "
         << calculate(5.0f) << endl;

    cout << "Volume of Cuboid (2x3x4) : "
         << calculate(2.0f, 3.0f, 4.0f) << endl;

    return 0;
}

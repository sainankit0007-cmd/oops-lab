#include <iostream>
using namespace std;

float simpleInterest(float principal, float rate = 5.0, int time = 1) {
    return (principal * rate * time) / 100.0;
}

int main() {
    float p;

    cout << "Enter Principal: ";
    cin >> p;

    cout << "SI (default rate=5%, time=1yr) : "
         << simpleInterest(p) << endl;

    cout << "SI (rate=8%, default time=1yr) : "
         << simpleInterest(p, 8.0) << endl;

    cout << "SI (rate=10%, time=3yrs)       : "
         << simpleInterest(p, 10.0, 3) << endl;

    return 0;
}

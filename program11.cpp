#include <iostream>
using namespace std;

class Engine {

public:
    void start() {
        cout << "Engine Started" << endl;
    }
};

class Car {

    Engine e;

public:
    void drive() {
        e.start();
        cout << "Car is Moving" << endl;
    }
};

int main() {

    Car c;

    c.drive();

    return 0;
}

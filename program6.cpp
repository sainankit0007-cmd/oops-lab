#include <iostream>
#include <cstring>
using namespace std;

class Student {

    char *name;

public:

    Student(char *n) {

        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    void display() {
        cout << "Student Name : "
             << name << endl;
    }
};

int main() {

    char name[50];

    cout << "Enter Name: ";
    cin >> name;

    Student s1(name);

    s1.display();

    return 0;
}

#include <iostream>
using namespace std;

class CurrencyConverter {

    float amount;

public:

    void input() {
        cout << "Enter Amount in INR: ";
        cin >> amount;
    }

    void menu() {

        int choice;

        cout << "\n1. INR to USD";
        cout << "\n2. INR to EUR";
        cout << "\n3. INR to GBP";
        cout << "\nEnter Choice: ";

        cin >> choice;

        switch(choice) {

        case 1:
            cout << "USD : " << amount / 83 << endl;
            break;

        case 2:
            cout << "EUR : " << amount / 90 << endl;
            break;

        case 3:
            cout << "GBP : " << amount / 100 << endl;
            break;

        default:
            cout << "Invalid Choice";
        }
    }
};

int main() {

    CurrencyConverter c;

    c.input();
    c.menu();

    return 0;
}

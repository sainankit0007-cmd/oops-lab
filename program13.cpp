#include <iostream>
using namespace std;

class BankAccount {

    int accNo;
    string name;
    float balance;

public:

    void createAccount() {

        cout << "Enter Account Number: ";
        cin >> accNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit(float amount) {

        balance += amount;

        cout << "Amount Deposited Successfully" << endl;
    }

    void withdraw(float amount) {

        if(amount <= balance) {

            balance -= amount;

            cout << "Withdrawal Successful" << endl;
        }
        else {

            cout << "Insufficient Balance" << endl;
        }
    }

    void display() {

        cout << "\nAccount Number : " << accNo << endl;
        cout << "Account Holder : " << name << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main() {

    BankAccount b;

    float dep, withAmt;

    b.createAccount();

    cout << "\nEnter Deposit Amount: ";
    cin >> dep;

    b.deposit(dep);

    cout << "Enter Withdraw Amount: ";
    cin >> withAmt;

    b.withdraw(withAmt);

    b.display();

    return 0;
}
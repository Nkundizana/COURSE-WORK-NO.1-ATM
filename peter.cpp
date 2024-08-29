
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int pin;
    int password = 2345;
    int count = 0;
    int entry;
    double deposit = 0.0;
    double balance = 0.0;
    double withdraw = 0.0;
    bool isTrue = true;

    do {
        cout << "*** Your most welcome ***" << endl;
        cout << "Enter your pin:\n";
        cin >> pin;

        if (pin == password) {
            cout << "*** Your most welcome ***\n";
            cout << "1. Deposit\n";
            cout << "2. Withdraw\n";
            cout << "3. Balance\n";
            cout << "4. Quit\n";
            cout << "Choose an option: ";
            cin >> entry;

            switch (entry) {
                case 1:
                    cout << "Deposit amount:\n";
                    cin >> deposit;
                    balance = balance + deposit;
                    break;
                case 2:
                    cout << "Withdraw amount :\n";
                    cin >> withdraw;
                    if (withdraw <= balance) {
                        balance = balance - withdraw;
                    } else {
                        cout << "Insufficient balance!\n";
                    }
                    break;
                case 3:
                    cout << "Current balance: $" << balance << endl;
                    break;
                case 4:
                    cout << "Thank you, have a nice day!\n";
                    isTrue = false;
                    break;
                default:
                    cout << "Invalid option, please try again.\n";
                    break;
            }
        } else {
            count++;
            cout << "Incorrect PIN. Try again.\n";
            if (count == 3) {
                cout << "Too many incorrect attempts. Exiting...\n";
                isTrue = false;
            }
        }

    } while (isTrue);

    return 0;
}

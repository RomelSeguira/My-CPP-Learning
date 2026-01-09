#include <iostream> // for cin and cout
#include <iomanip> // for setfill and setw
#include <limits> // for numeric limit
#include <vector> // for dynamic array (vector)
#include <sstream>
#include <string>

using namespace std; // for std::

//set as global variable
vector<int> history;
int balance = 0;


int getValidInteger() {
    int amount;
    string lineInput;

    while (true) {
        cout << "Enter the Amount: ";
        getline(cin, lineInput);
        if (lineInput.empty()) {
            cout << "Input cannot be empty.\n";
            continue;
        }
        stringstream ss(lineInput);
        if (ss >> amount) {
            return amount; //return amount
        } else {
            cout << "Invalid input! Please enter digits only.\n";
        }
    }
}


// functionn for error handling
void errorhandle() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
// line seperator
void seperator(int sep) {
    cout << left;
    cout << setfill('-');
    cout << setw(sep) << "" << endl;
    cout << setfill(' ');
}
//depositing function
void deposit() {
    int amount;
    if (history.size() >= 10) {
        cout << "Transaction's full! (Limit 10 reached)\n";
    }
    else {
        cout << "Depositing....\n";
        amount = getValidInteger();

        if (amount <= 0) {
            cout << "Amount must be greater than 0.\n";
        } // 50,000 thousand depositing limit
        else if (amount > 50000) {
            cout << "You reached the limit for available amount to deposit!\n";
            cout << "Please enter amount less than 50,000.\n";
        }
        else {
            balance = balance + amount;
            history.push_back(amount); // push amount to the history array.
            cout << "You deposit $" << amount << ".\n";
        }
    }
}
//withdrawal function
void withdraw() {
    int amount;
    if (history.size() >= 10) {
        cout << "Transaction's full! (Limit 10 reached)\n";
    }
    else {
        cout << "Withdrawal....\n";
        amount = getValidInteger();

        if (cin.fail()) {
            cout << "Invalid input! Please enter numbers only.\n";
            errorhandle();
        }
        else if (amount <= 0) {
            cout << "Amount must be greater than 0.\n";
        }
        else if (amount > balance) {
            cout << "Insufficient balance!\n";
        }
        else {
            balance = balance - amount;
            history.push_back(-amount); // push -amount to the history array.
            cout << "You withdraw -$" << amount << ".\n";
        }
    }
}
// transaction history function
void transHistory() {
    cout << left;
    cout << setw(15) << "Recent Transaction\n";
    seperator(30);


    if (history.empty()) {
        cout << "No transactions yet.\n";
    }
    else {
        for (int i = 0; i < history.size(); i++) {
            if (history[i] > 0) {
                cout << "Deposit:    +$" << history[i] << endl;
            }
            else {
                cout << "Withdrawal: -$" << -history[i] << endl;
            }
        }
    }
}
// main function
int main() {
    int choice = 0;

    while (choice != 5) {
        seperator(30);
        cout << "Welcome! Digital Wallet\n";
        cout << "----Menu----\n1.)Deposit\n2.)Withdraw\n3.)Check Balance\n4.)View recent transaction\n5.)Exit\n";
        cout << "select: ";
        cin >> choice;

        if (cin.fail()) {
            errorhandle();
            cout << "Invalid input! Please enter a number.\n";
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (choice == 5) {
            cout << "Thank you please comeback again!";
            break;
        }

        if (choice == 1) {
            deposit();
        }
        else if (choice == 2) {
            withdraw();
        }
        else if (choice == 3) {
            cout << "Your Current Balance is $" << balance << ".\n";
        }
        else if (choice == 4) {
            transHistory();
        }
        else {
            cout << "Invalid input! choose 1-5 option\n";
        }
    }
    return 0;
}

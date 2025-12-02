#include <iostream>
using namespace std;

int main() {
    int factorial = 1, a;
    bool User_Handle = false;

    // Loop for user input validation (WHILE loop)
    while (!User_Handle) {
        cout << "------------------------------------------\n";
        cout << "C++ program to find the factorial.\n";
        cout << "------------------------------------------\n";
        cout << "Input any number: ";
        if (!(cin >> a)) {
            User_Handle = true;
        } else if (a < 0) {
            cout << "please enter a positive number.\n";
        } else {
            User_Handle = true;
        }

        if (!User_Handle) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid Input! Enter Positive Integer.\n";
        }
    }

    // Main factorial calculation loop (FOR loop)
    for (int i = 1; i <= a; i++) {
        factorial = factorial * i;
    }
    
    cout << "\n----------------------------------------------------------\n";
    cout << "The factorial of the given number is = " << factorial << endl;
    cout << "----------------------------------------------------------\n";

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;
    int result;
    
    cout << "Enter the operator (1 - addition, 2 - subtraction, 3 - multiplication)" << endl;
    cin >> op;
    
    cout << "Enter num numbers" << endl;
    cin >> num1 >> num2;
    
    switch (op) {
        case '1':
            result = num1 + num2;
            cout << "the result is: " << result << endl;
            break;
        case '2':
            result = num1 - num2;
            cout << "the result is: " << result << endl;
            break;
        case '3':
            result = num1 * num2;
            cout << "the result is: " << result << endl;
            break;
        default:
            cout << "Invalid operator." << endl;
    }
    
    return 0;
}

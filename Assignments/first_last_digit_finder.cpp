#include <iostream>
using namespace std;

int main() {
    int n, first, last;
    
    cout << "------------------------------------------\n";
    cout << "C++ program to find the first and last\n";
    cout << "digit of a number.\n";
    cout << "------------------------------------------\n";
    
    cout << "Input any number: ";
    cin >> n;
    
    // Get the last digit
    last = n % 10;
    
    // Get the first digit (Loop to reduce n until it is a single digit)
    for (first = n; first >= 10; ) {
        first = first / 10;
    }
    
    cout << "\n------------------------------------------\n";
    cout << "The first digit of " << n << " is: " << first << "\n";
    cout << "The last digit of " << n << " is: " << last << "\n";
    cout << "------------------------------------------\n";
    
    return 0;
}

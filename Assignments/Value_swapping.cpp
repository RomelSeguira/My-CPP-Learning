
#include <iostream>
using namespace std; // so we dont have to keep repeating std::. that shi was exhausting.

int main() {
    // You create variable first we need three, the other one is for the empty container hold the value of the other variable. yeah yeah.
    int x = 5;
    int y = 10;
    int container;

    cout << "--- Initial Values ---\n"; // "\n" same as << endl;
    cout << "X is: " << X << endl;
    cout << "Y is: " << Y << endl;
    cout << "----------------------" << endl;

    
    container = x; // meaning == container variable now hold the value of x which is 10.
    X = y;    // Now the x is empty, we now move the value of y to x. thats it.
    y = temp;   // y is empty right? and the temp has the value of 10. thats it.

    cout << "--- Values After Swap ---" << endl;
    cout << "X is: " << X << " (Should be 10)" << endl;
    cout << "Y is: " << Y << " (Should be 5)" << endl;
    cout << "-------------------------" << endl;

    return 0;
}


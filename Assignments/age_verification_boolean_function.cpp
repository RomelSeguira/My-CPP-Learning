#include <iostream>
using namespace std;

bool getAge(int age) {
    bool Truth = (age >= 18);
    return Truth;
}

int main() {
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    
    if (getAge(age)) {
        cout << "You are allowed, Magmahalan tayo." << endl;
    } else {
        cout << "You are not allowed, Wag ka dito bata." << endl;
    }
    
    return 0;
}

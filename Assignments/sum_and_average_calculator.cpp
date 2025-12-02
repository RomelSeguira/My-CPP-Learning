#include <iostream>
using namespace std;

int sum(int a, int b, int c, int d, int e) {
    int sum;
    sum = a + b + c + d + e;
    return sum;
}

float average(int a, int b, int c, int d, int e) {
    int average;
    average = sum(a, b, c, d, e) / 5;
    return average;
}

int main() {
    int a, b, c, d, e;
    cout << "Enter five numbers: " << endl;
    cin >> a >> b >> c >> d >> e;
    
    cout << "Sum: " << sum(a, b, c, d, e) << endl;
    cout << "Average: " << average(a, b, c, d, e) << endl;
    
    return 0;
}

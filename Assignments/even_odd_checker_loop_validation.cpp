#include <iostream>
#include <limits>
using namespace std;

int main() {
    char repeat = 'Y';
    
    // Outer loop controls if the whole process should repeat
    while (repeat == 'Y' || repeat == 'y') {
        
        cout << "Enter 5 integers: " << endl;
        // Inner loop runs 5 times for 5 inputs
        for (int i = 1; i <= 5; i++) {
            
            int num;
            // Input validation loop
            while (!(cin >> num)) {
                
                cout << "Invalid input. Please enter an integer." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            
            // Even/Odd check
            if (num % 2 == 0) {
                cout << "You entered: " << num << " -> Even" << endl;
            } else {
                cout << "You entered: " << num << " -> Odd" << endl;
            }
        }
        
        // Block to handle the repeat choice
        do {
            cout << "Do you want to try again? (Y/N): ";
            cin >> repeat;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
            // If input is not Y, y, N, or n, show invalid choice message
            if (repeat != 'Y' && repeat != 'y' && repeat != 'N' && repeat != 'n') {
                cout << "Invalid choice, choose again." << endl;
            }
            
        } while (repeat != 'Y' && repeat != 'y' && repeat != 'N' && repeat != 'n');
    }
    
    cout << "Program ended." << endl;
    return 0;
}

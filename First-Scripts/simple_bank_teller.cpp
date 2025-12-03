#include <iostream>
#include <limits>
using namespace std;
This is completion of my simple bank teller project
I completely change the structure from switch to if statement, because i got a lot of error in switch.


// START
// 
/*int ReuseableErrorHandling(cin.fail())
{
if(cin.fail()){
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
else {
cout << "Invalid Input.\n";
}
}*/
void errorHandling() {
cin.fail();
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
cout << "Invalid Input! Please enter between 1-4\n";
};


int main() {
int wallet = 0;
int deposit, currentBalance;
int withdraw;
int choice;
while (choice != 4) {

cout << "\nSelect \n1.) deposit\n2.) withdraw\n3.) view balance\n4.) Exit\n";
cout << "Enter input: ";
cin >> choice;
if (choice == 1) 
    {
        cout << "Please enter the amount to deposit.\nEnter input: ";
        cin >> deposit;
        cout << "You deposit "<< deposit<< " amount.\n";
        wallet = deposit + wallet;
        cout <<"You have " << wallet<<" balance in your wallet."; 
    }
        else if (choice == 2) 
            {
                cout << "Please enter the amount to withdraw.\nEnter input: ";
                cin >> withdraw;
                cout << "You withdraw " << withdraw << " amount.\n;";
                wallet = withdraw - wallet;
                cout << "You have " << wallet <<" balance in your wallet.";
            }
                else if (choice == 3) 
                    {
                        cout << "You Have a " << wallet << " in your wallet\n"; 
                    }
                        else if(choice == 4) 
                        {
                            break;
                        }
                        else 
                        {
                            errorHandling();
                        }

}
cout << "Thankyou for using our program.";
return 0;
}

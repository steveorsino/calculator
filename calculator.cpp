#include <iostream>

using namespace std;

int main() {
    
    double a, b;
    char choice;
    
    do {
        
        
        cout << "\n\nBasic Calculator\n\n"
            << "Choose an operation:\n"
            << "\tA. Addition\n"
            << "\tB. Subtraction\n"
            << "\tC. Multiplication\n"
            << "\tD. Division\n"
            << "\tE. End Calculator\n\n"
            << "Enter your choice: ";
            
        cin >> choice;
        
        if (choice == 'A' || choice == 'a') {
            
            cout << "Enter your first number \n";
            cin >> a;
            cout << "Enter your second number \n";
            cin >> b;
            cout << "The sum is " << a + b << endl;
            
        }
            
        else if (choice == 'B' || choice == 'b') {
            
            cout << "Enter your first number \n";
            cin >> a;
            cout << "Enter your second number \n";
            cin >> b;
            cout << "The difference is " << a - b << endl;
            
        }
        
        else if (choice == 'C' || choice == 'c') {
            
            cout << "Enter your first number \n";
            cin >> a;
            cout << "Enter your second number \n";
            cin >> b;
            cout << "The product is " << a * b << endl;
            
        }
        
        else if (choice == 'D' || choice == 'd') {
            
            b = 1;
            
            do {
                
                cout << "Enter your first number \n";
                cin >> a;
                cout << "Enter your second number \n";
                cin >> b;
                if (b == 0) {
                    cout << "You cannot divide by 0.  Choose new numbers.\n\n";
                }
                
            } while(b == 0);
            
            cout << "The quotient is " << a / b << endl; 
            
        }
        
        else if (choice == 'E' || choice == 'e'){
            
            cout << "Goodbye";
            
        }
        
        else {
            cout << "\nYou must choose A - E\n";
        } 
        
    } while(choice != 'E' && choice != 'e');
    
    
    
    return 0;
}
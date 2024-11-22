#include <iostream>

using namespace std;

int main()
{
    double num1, num2, result;
    char operation;
    char choice;
    
    cout << "C++ calculator" << endl;
    
    do {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        
        cout << "Choose an operation (+, -, *, /): ";
        cin >> operation;
        
        
        switch (operation) {
            case '+':
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;
                
            case '-':
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;
            case '*':
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;
            
            case '/':
                if(num2 != 0){
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
                
            default:
                cout << "Invalid operation. Please choose +, -, * or /." << endl;
        }
        
        cout << "Do you want to perform another calculation ? (y/n)";
        cin >> choice;
        
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
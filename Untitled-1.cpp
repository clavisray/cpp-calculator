#include <iostream>
#include <sstream>
#include <string>
#include <limits>

using namespace std;


int main()
{
    string expression; 
    double num1, num2, result;
    char operation;
    
    cout << "First App - C++ calculator" << endl;
    
    do{
        cout << "Enter an expression, e.g. (5+5): ";
        getline(cin, expression);
        
        stringstream ss(expression);
        
        
        if(!(ss >> num1 >> operation >> num2)){
            cout << "Invalid input. Please use a valid expression with two numbers and an operator." << endl;
            continue;
        }
        
        if(operation != '+' && operation != '-' && operation != '*' && operation != '/'){
            cout << "Invalid operation. Please enter a valid operation with two numbers and an operator." << endl;
            continue;
        }
        switch(operation){
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
        }
            cout << "Do you want to make another operation? (y/n)";
            char choice;
            cin >> choice;
            
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
            if(choice != 'y' && choice != 'Y'){
                cout << "Goodbye" << endl;
                break;
            }
        
    } while(true);
    
    return 0;
}
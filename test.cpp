#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void displayMenu() {
    cout << "\n====== Scientific Calculator ======" << endl;
    cout << "Basic Operations:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Modulus (%)" << endl;
    cout << "\nScientific Functions:" << endl;
    cout << "6. Square Root" << endl;
    cout << "7. Power (x^y)" << endl;
    cout << "8. Sine" << endl;
    cout << "9. Cosine" << endl;
    cout << "10. Tangent" << endl;
    cout << "11. Logarithm (base 10)" << endl;
    cout << "12. Natural Logarithm" << endl;
    cout << "13. Exponential (e^x)" << endl;
    cout << "14. Absolute Value" << endl;
    cout << "15. Factorial" << endl;
    cout << "0. Exit" << endl;
    cout << "==================================\n" << endl;
}

long long factorial(int n) {
    if (n < 0) {
        cout << "Error: Factorial not defined for negative numbers!" << endl;
        return 0;
    }
    if (n == 0 || n == 1) return 1;
    
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int choice;
    double num1, num2, result;
    int intInput;
    
    cout << fixed << setprecision(6);
    
    while (true) {
        displayMenu();
        cout << "Enter your choice (0-15): ";
        cin >> choice;
        
        if (choice == 0) {
            cout << "Thank you for using the Scientific Calculator!" << endl;
            break;
        }
        
        switch (choice) {
            case 1:
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                result = num1 + num2;
                cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                break;
                
            case 2:
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                result = num1 - num2;
                cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                break;
                
            case 3:
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                result = num1 * num2;
                cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                break;
                
            case 4:
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
                
            case 5:
                cout << "Enter first number (integer): ";
                cin >> intInput;
                cout << "Enter second number (integer): ";
                int divisor;
                cin >> divisor;
                if (divisor != 0) {
                    cout << "Result: " << intInput << " % " << divisor << " = " << (intInput % divisor) << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
                
            case 6:
                cout << "Enter number: ";
                cin >> num1;
                if (num1 >= 0) {
                    result = sqrt(num1);
                    cout << "Result: sqrt(" << num1 << ") = " << result << endl;
                } else {
                    cout << "Error: Cannot calculate square root of negative number!" << endl;
                }
                break;
                
            case 7:
                cout << "Enter base (x): ";
                cin >> num1;
                cout << "Enter exponent (y): ";
                cin >> num2;
                result = pow(num1, num2);
                cout << "Result: " << num1 << "^" << num2 << " = " << result << endl;
                break;
                
            case 8:
                cout << "Enter angle in degrees: ";
                cin >> num1;
                result = sin(num1 * M_PI / 180.0);
                cout << "Result: sin(" << num1 << "°) = " << result << endl;
                break;
                
            case 9:
                cout << "Enter angle in degrees: ";
                cin >> num1;
                result = cos(num1 * M_PI / 180.0);
                cout << "Result: cos(" << num1 << "°) = " << result << endl;
                break;
                
            case 10:
                cout << "Enter angle in degrees: ";
                cin >> num1;
                result = tan(num1 * M_PI / 180.0);
                cout << "Result: tan(" << num1 << "°) = " << result << endl;
                break;
                
            case 11:
                cout << "Enter number: ";
                cin >> num1;
                if (num1 > 0) {
                    result = log10(num1);
                    cout << "Result: log10(" << num1 << ") = " << result << endl;
                } else {
                    cout << "Error: Logarithm not defined for non-positive numbers!" << endl;
                }
                break;
                
            case 12:
                cout << "Enter number: ";
                cin >> num1;
                if (num1 > 0) {
                    result = log(num1);
                    cout << "Result: ln(" << num1 << ") = " << result << endl;
                } else {
                    cout << "Error: Logarithm not defined for non-positive numbers!" << endl;
                }
                break;
                
            case 13:
                cout << "Enter exponent (x): ";
                cin >> num1;
                result = exp(num1);
                cout << "Result: e^" << num1 << " = " << result << endl;
                break;
                
            case 14:
                cout << "Enter number: ";
                cin >> num1;
                result = fabs(num1);
                cout << "Result: |" << num1 << "| = " << result << endl;
                break;
                
            case 15:
                cout << "Enter non-negative integer: ";
                cin >> intInput;
                if (intInput >= 0) {
                    result = factorial(intInput);
                    cout << "Result: " << intInput << "! = " << (long long)result << endl;
                } else {
                    cout << "Error: Factorial not defined for negative numbers!" << endl;
                }
                break;
                
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
    
    return 0;
}

#include <iostream>
#include <limits>

using namespace std;

// Function to validate user input
void getValidNumber(double &num) {
    while (!(cin >> num)) {
        cin.clear(); // Clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cout << "Invalid input! Please enter a number: ";
    }
}
int main() {
    double num1, num2, result;
    char operation;

    cout << "Enter first number: ";
    getValidNumber(num1);

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
    
    cout << "Enter second number: ";
    getValidNumber(num2);

    switch (operation) {
        // case '+':
        //     result = num1 + num2;
        //     break;
        case '-':
            result = num1 - num2;
            break;
        // case '*':
        //     result = num1 * num2;
        //     break;
        // case '/':
        //     if (num2 == 0) {
        //         cout << "Error! Division by zero is not allowed." << endl;
            //     return 1;
            // }
            result = num1 / num2;
            break;
        default:
            cout << "Invalid operation!" << endl;
            return 1;
    }
    
    cout << "Result: " << result << endl;
    return 0;
}
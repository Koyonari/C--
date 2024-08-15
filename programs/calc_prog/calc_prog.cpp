#include <iostream>

int main() {
    using std::cout;
    using std::cin;

    double num1;
    double num2;
    char op;
    double result;

    // Start program message
    cout << "------------Calculator Program------------\n";

    // Prompt user for first number
    cout << "Enter your first number: ";
    cin >> num1;

    // Prompt user for second number
    cout << "Enter your second number: ";
    cin >> num2;

    // Prompt user for operator
    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;

    // Calculate result
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            cout << "Invalid operator entered.\n";
    }

    // Print result
    cout << "The result of " << num1 << " " << op << " " << num2 << " is " << result << '\n';
}
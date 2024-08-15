#include <iostream>
#include <cmath>

int main() {
    using std::cout;
    using std::cin;

    // Start program message
    cout << "------------Hypotenuse Calculator------------\n";

    // Enter first number
    int num1;
    cout << "Enter your first number: ";
    cin >> num1;

    // Enter second number
    int num2;
    cout << "Enter your second number: ";
    cin >> num2;

    // Calculate hypotenuse
    double hypotenuse = sqrt(pow(num1, 2) + pow(num2, 2));
    cout << "The hypotenuse of the right triangle with sides " << num1 << " and " << num2 << " is " << hypotenuse << '\n';

    return 0;
}
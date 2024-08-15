#include <iostream>

int main() {
    using std::cout;
    using std::cin;

    double temp;
    char unit;

    // Start program message
    cout << "------------Temperature Converter------------\n";

    // Prompt user for temp
    cout << "Enter the temperature: ";
    cin >> temp;

    // Prompt user for unit
    cout << "Enter the unit (F for Fahrenheit, C for Celsius): ";
    cin >> unit;

    if (unit == 'F') {
        cout << "The temperature in Celsius is " << (temp - 32) * 5 / 9 << "C" << "\n";
    } else if (unit == 'C') {
        cout << "The temperature in Fahrenheit is " << temp * 9 / 5 + 32 << "F" << "\n";
    } else {
        cout << "Invalid unit entered.\n";
    }

}
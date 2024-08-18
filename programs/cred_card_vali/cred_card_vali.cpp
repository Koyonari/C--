//Luhn Algorithm
#include <iostream>

using std::string;
using std:: cout;
using std:: cin;

int getDigit(const int number);
int sumOddDigits(const string cardNum);
int sumEvenDigits(const string cardNum);

int main() {
    int result = 0;
    string cardNum;

    cout << "Enter a credit card number: ";
    cin >> cardNum;

    int sumOdd = sumOddDigits(cardNum);
    int sumEven = sumEvenDigits(cardNum);
    result = sumOdd + sumEven;

    std::cout << "Sum of odd numbers: " << sumOdd << "\n";
    std::cout << "Sum of even numbers: " << sumEven << "\n";
    std::cout << "Total: " << result << "\n";

    if (result % 10 == 0) {
        std::cout << "Valid Credit Card Number!\n";
    } else {
        std::cout << "Invalid Credit Card Number :(\n";
    }
}

// Get the last digit of the number only if the number is greater than 10
int getDigit(const int number) {
    return number % 10 + (number / 10 % 10);
    // Example: number = 18
    // 18 % 10 = 8
    // Since int division, 18 / 10 = 1
    // 1 % 10 = 1
    // 8 + 1 = 9
    // Return 9
}

int sumOddDigits(const string cardNum) {
    int sum = 0;
    for (int i = cardNum.size() - 1; i >= 0; i -= 2) { // Since using index, -1 to start from the last value, -2 to start from second last value
        sum+= (cardNum[i] - 48); 
        // Subtract 48 or '0' to convert from ASCII
        // 0 has a decimal value of 48
        // 1 has a decimal value of 49
        // 2 has a decimal value of 50 and so on....
        // cardNum[i] returns the decimal value of the character
        // cardNum[i] - 48 returns the actual number
    }
    return sum;
}

int sumEvenDigits(const string cardNum) {
    int sum = 0;
    for (int i = cardNum.size() - 2; i >= 0; i -= 2) { // Since using index, -1 to start from the last value, -2 to start from second last value
        sum+=getDigit((cardNum[i] - 48) * 2);
    }
    return sum;
}
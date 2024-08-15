#include <iostream>

int main() {
    using std::cout;
    using std::cin;

    // Start program message
    cout << "------------Number Guessing Game------------\n";

    // Enter first number
    int num1;
    cout << "Enter your first number: ";
    cin >> num1;

    // Enter second number
    int num2;
    cout << "Enter your second number: ";
    cin >> num2;

    // Random number between num1 and num2
    int num = rand() % std::max(num1, num2) + std::min(num1, num2);

    // Guess a number between num1 and num2
    int guess;
    cout << "Guess a number between " << num1 << " and " << num2 << ": ";
    cin >> guess;

    // Check if the guess is correct
    if (guess == num) {
        cout << "Congratulations! You guessed the correct number.\n";
    } else {
        cout << "Sorry! You guessed the wrong number. The correct number is " << num << '\n';
    }

    return 0;
}
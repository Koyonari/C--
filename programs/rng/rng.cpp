#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    // Start program message
    cout << "------------Random Number Generator------------\n";

    // Pseudo-random number generator (Not totally random but close)
    srand(time(NULL));
    int num = rand(); // Goes up to 32767
    cout << "Random number: " << num << endl;

    // Simulate a 6 sided die
    int num1 = (rand() % 6) + 1; // 0 to 5 + 1 = 1 to 6
    cout << "Six-sided die roll: " << num1 << endl;

    return 0;
}
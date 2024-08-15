#include <iostream>

int main() {
    using std::cout;

    // Start program message
    cout << "------------Random Event Generator------------\n";

    srand(time(NULL));
    int num = rand() % 5 + 1;
    cout << "Random number generated: " << num << '\n';

    switch (num) {
        case 1: cout << "You win a car!\n"; 
                break;
        case 2: cout << "You win a boat!\n";
                break;
        case 3: cout << "You win a vacation!\n";
                break;
        case 4: cout << "You win a house!\n";
                break;
        case 5: cout << "You win a million dollars!\n";
                break;
        default: cout << "You win nothing!\n";
    }
}
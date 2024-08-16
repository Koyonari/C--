#include <iostream>

int main() {
    using std::cout;

    std::string car[] = {"BMW", "Audi", "Mercedes", "Toyota", "Honda"};

    for (int i = 0; i < 5; i++) {
        cout << car[i] << '\n';
    }

    // Reassigning the value of index
    cout << "Value of index 0 before reassigning: " << car[0] << '\n';
    car[0] = "Ford";
    cout << "Value of index 0 after reassigning: " << car[0] << '\n';

    // Setting array size
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Size of array: " << sizeof(arr) / sizeof(arr[0]) << '\n';

    return 0;
}
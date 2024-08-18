// nullptr = keyword representing a null pointer
// when using pointers, check if the pointer is null before dereferencing it
// deferencing null pointers can cause runtime errors
#include <iostream>
using std::cout;
using std::cin;
using std::string;

int main() {

    int *pointer = nullptr;
    int x = 123;
    pointer = &x; // pointer now holds the address of x

    if (pointer != nullptr) {
        cout << "The value of x is: " << *pointer << "\n";
    }
    else {
        cout << "Address is not assigned, you tried deferencing a null pointer\n";
    }

    return 0;
}
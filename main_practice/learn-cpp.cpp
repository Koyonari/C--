// Const Pass by Reference - Read only
#include <iostream>
using std::cout;
using std::cin;
using std::string;

void print(const string &name, const int &age);

int main() {

    print("John", 21);

    return 0;
}

void print(const string &name, const int &age) {
    // name = "Jane"; // Error: const
    // int = 2; // Error: const
    cout << name << " is " << age << " years old.\n";
}
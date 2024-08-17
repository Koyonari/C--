// Memory Address - location in memory where data is stored, accessible with &
#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::string;

    string name = "John";
    int age = 21;
    bool student = true;
    double gpa = 3.5;
    string address = "123 Main St";

    cout << "String Name Memory Address: " << &name << "\n"; // 0x61a2dff8b0, 419344414896
    cout << "Int Age Memory Address: " << &age << "\n"; // 0x61a2dff8ac, 419344414892
    cout << "Bool Student Memory Address: " << &student << "\n"; // 0x61a2dff8ab, 419344414891
    cout << "Double GPA Memory Address: " << &gpa << "\n"; // 0x61a2dff8a0, 419344414880
    cout << "String Address Memory Address: " << &address << "\n"; // 0x61a2dff880, 419344414848
    
    cout << "\nSize of int: " << sizeof(int) << " bytes\n";
    cout << "Size of bool: " << sizeof(bool) << " bytes\n";
    cout << "Size of double: " << sizeof(double) << " bytes\n";
    cout << "Size of string: " << sizeof(std::string) << " bytes\n";

    // Difference in memory address between name and age converted to decimal = 4.
    // Difference in memory address between age and student converted to decimal = 1.

    // Between name and age = 4 as age is a int and takes 4 bytes.
    // Between age and student = 1 as student is a bool and takes 1 byte.

    return 0;
}

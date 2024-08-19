#include <iostream>
using std::cout;
using std::cin;
using std::string;

struct student {
    string name;
    int age;
    double gpa;
    bool enrolled;
};

int main() {
    student s1;
    s1.name = "John";
    s1.age = 21;
    s1.gpa = 3.5;
    s1.enrolled = true;

    cout << "Name: " << s1.name << "\n";
    cout << "Age: " << s1.age << "\n";
    cout << "GPA: " << s1.gpa << "\n";
    cout << "Enrolled: " << s1.enrolled << "\n";

    return 0;
}
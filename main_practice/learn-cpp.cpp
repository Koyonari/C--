// if new is used, delete should be used to free memory
// new operator - allocate memory
// delete operator - free memory
#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main() {
    char *pGrades = NULL;
    int size;

    cout << "Enter number of grades: ";
    cin >> size;

    pGrades = new char[size];
    for (int i = 0; i < size; i++){
        cout << "Enter grade #" << i + 1 << ": ";
        cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++){
        cout << "Grade #" << i + 1 << ": " << pGrades[i] << "\n";
    }

    delete[] pGrades;

    return 0;
}
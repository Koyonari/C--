#include <iostream>

void bubbleSort(int array[], int size);

int main() {
    using std::cout;
    using std::string;
    using std::cin;

    int array[] = {2, 1, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);
    bubbleSort(array, size);

    for (int element: array) {
        cout << element << " ";
    }

    return 0;
}

void bubbleSort(int array[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] < array[j + 1]) { // If statement to check if first element is less than second statement
                temp = array[j]; // temp -> 1st, Assign the first element to temporary variable
                array[j] = array[j + 1]; // 1st -> 2nd, Assign the first element to the second element
                array[j + 1] = temp; // 2nd -> temp, Assign the second element to the temporary variable which is the first element
            }
        }
    }
}

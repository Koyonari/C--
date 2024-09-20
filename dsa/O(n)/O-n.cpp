#include <iostream>
using namespace std;

// O(n)
void printItems(int n) {
    for (int i = 0; i < n; i++) {
        cout << i << endl;
    }
}

// O(n), not O(2m) as constant "2" is dropped
void printDroppedConstant1(int n) {
    for (int i = 0; i < n; i++) {
        cout << i << endl;
    }
}
void printDroppedConstant2(int n) {
    for (int j = 0; j < n; j++) {
        cout << j << endl;
    }
}

// O(n**2)
void printItemsSquared(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << i << " " << j << endl;
        }
    }
}

// O(n**2), not O(n**2 + 2), dropped non-dominants 
// O(n**2) - Dominant
// O(n) - Non-dominant
// Explanation: As n increases, O(n)'s significance decreases. Hence, simplified uses dropped non-domainants
void printItemsSquared1(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << i << " " << j << endl;
        }
    }
    
    for (int k = 0; k < n; k++) {
	    cout << k << endl;
	  }
};

// O(log n)
/*
Explanation:
int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
To find where 1 is in the array, divide by array by 2 until you find 1.

In this case, to find 1 in the array:
Step 1: array/2 = {1, 2, 3, 4} or {5, 6, 7, 8}
Step 2: Take the array with 1 and divide by 2 = {1, 2} or {3, 4}
Step 3: Take the array with 1 and divide by 2 = {1}

Total: 3 Steps which is also 2**3 = 8, log2(8) = 3
*/

// O(a + b), not O(n) as a and b are different terms
void printDifferentInput(int a, int b){
    // O(a)
    for (int i = 0; i < a; i++) {
        cout << i << endl;
    }
    // O(b)
    for (int j = 0; j < b; j++) {
        cout << j << endl;
    }
}

// O(a * b), not O(n**2) as a and b are different terms
void printDifferentInputs(int a, int b) {
    // O(a)
    for (int i = 0; i < a; i++) {
        // O(b)
        for (int j = 0; j < b; j++) {
            cout << i << " " << j << endl;
        }
    }
}

// Vectors
#include <vector>
void printVector(int n) {
    vector<int> arrayVector = {12, 23, 11, 3};
    arrayVector.push_back(4); //Add 4 to the end of the vector
    arrayVector.pop_back(); //Remove the last element from the vector
    // Since push_back and pop_back does not touch other elements, it is O(1)

    arrayVector.erase(arrayVector.begin()); //Remove the first element from the vector
    arrayVector.insert(arrayVector.begin(), 5); //Insert 5 at the first position in the vector
    // Since erase and insert touches other elements as the indexes after the insert placement change, it is O(n)

    // Notes: Looking up by index is O(1) and looking up by value is O(n)
}


int main() {
}
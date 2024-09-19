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

int main() { 
    printItems(10);
}

// O(n**2), not O(n**2 + 2), dropped non-dominants 
// O(n**2) - Dominant
// O(n) - Non-dominant
// Explanation: As n increases, O(n)'s significance decreases. Hence, simplified uses dropped non-domainants
void printItemsSquared(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << i << " " << j << endl;
        }
    }
    
    for (int k = 0; k < n; k++) {
	    cout << k << endl;
	  }
}
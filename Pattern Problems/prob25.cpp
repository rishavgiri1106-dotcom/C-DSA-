#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Rows for pattern: ";
    cin >> size;

    // Ensure the size is odd for symmetry
    if (size % 2 == 0) {
        cout << "Please enter an odd number for symmetry." << endl;
        return 0;
    }

    int mid = size / 2; // Find the middle index

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Print '*' if it's the middle row or middle column
            if (i == mid || j == mid)
                cout << "* ";
            else
                cout << "  "; // Print space otherwise
        }
        cout << endl;
    }

    return 0;
}
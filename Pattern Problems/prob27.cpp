#include <iostream>
using namespace std;

int main() {
    int row, col;
    int n;
    cout<<"Enter your number:";
    cin >> n;

    // Upper half
    for (row = 1; row <= n; row++) {

        // Spaces
        for (col = 1; col <= n - row; col++) {
            cout << " ";
        }

        // Stars
        for (col = 1; col <= 2 * row - 1; col++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half
    for (row = n - 1; row >= 1; row--) {

        // Spaces
        for (col = 1; col <= n - row; col++) {
            cout << " ";
        }

        // Stars
        for (col = 1; col <= 2 * row - 1; col++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

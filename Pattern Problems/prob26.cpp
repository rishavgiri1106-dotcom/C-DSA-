#include <iostream>
using namespace std;

void printStars(int count) {
    for (int i = 0; i < count; i++) cout << "* ";
}

void printSpaces(int count) {
    for (int i = 0; i < count; i++) cout << "  ";
}

int main() {
    int n = 7; // Must be odd
    int mid = n / 2;

    // 1. Top row: 1 star, spaces, mid+1 stars
    cout << "* ";
    printSpaces(mid - 1);
    printStars(mid + 1);
    cout << endl;

    // 2. Upper half (excluding top & mid): 1 star, spaces, 1 star
    for (int i = 0; i < mid - 1; i++) {
        cout << "* ";
        printSpaces(mid - 1);
        cout << "* ";
        cout << endl;
    }

    // 3. Middle row: all stars
    printStars(n);
    cout << endl;

    // 4. Lower half (excluding bottom & mid): spaces, 1 star, spaces, 1 star
    for (int i = 0; i < mid - 1; i++) {
        printSpaces(mid);
        cout << "* ";
        printSpaces(mid - 1);
        cout << "* ";
        cout << endl;
    }

    // 5. Bottom row: mid+1 stars, spaces, 1 star
    printStars(mid + 1);
    printSpaces(mid - 1);
    cout << "* ";
    cout << endl;

    return 0;
}
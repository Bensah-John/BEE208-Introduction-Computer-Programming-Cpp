#include <iostream>

using namespace std;

int main() {
    int x, y;

    cout << "Enter the first integer (x): ";
    cin >> x;
    cout << "Enter the second integer (y): ";
    cin >> y;

    cout << "Before swap: x = " << x << ", y = " << y << endl;

    // XOR swap algorithm
    x = x ^ y; // Step 1
    y = x ^ y; // Step 2
    x = x ^ y; // Step 3

    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}


#include <iostream>

using namespace std;

int main() {
    int x, y;

    cout << "Enter the first Integer: ";
    cin >> x;
    
    cout << "Enter the second Integer: ";
    cin >> y;

    int larger = (x > y) ? x : y;
    cout << "The larger number is: " << larger << endl;

    return 0;
}


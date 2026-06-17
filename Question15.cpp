#include <iostream>

using namespace std;

int main() {
    float A, B;

    cout << "Enter the first floating-point (A): ";
    cin >> A;
    cout << "Enter the second floating-point (B): ";
    cin >> B;
    
    float larger = (A > B) ? A : B;
    cout << "The larger floating point is: " << larger << endl;

    return 0;
}


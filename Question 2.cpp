#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double PI = 3.141;
    double radius;
    double area;

    cout << "Enter the radius : ";
    cin >> radius;

    area = PI * pow(radius, 2);
    cout << "The area of the circle= " << area <<endl;

    return 0;
}


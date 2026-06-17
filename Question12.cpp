#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    /* num % 2 != 0 checks if the number is odd */
    /* Check both conditions using logical AND (&&) */
    /* num % 3 == 0 checks if the number is perfectly divisible by 3 */
    if (num % 2 != 0 && num % 3 == 0)
        cout << "The number is odd and divisible by 3." << endl;
    else
        cout << "The number is not both odd and divisible by 3." << endl;

    return 0;
}


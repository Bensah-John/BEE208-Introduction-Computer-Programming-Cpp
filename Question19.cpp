#include <iostream>
#include <string>

using namespace std;

int main() {
    string binaryInput;
    int decimalAnswer = 0;

    // 1. Ask the user for a binary number
    cout << "Input a binary number: ";
    cin >> binaryInput;

    // 2. Change the binary number into a regular decimal number
    for (int i = 0; i < binaryInput.length(); i++) {
        char letter = binaryInput[i];
        
        decimalAnswer = decimalAnswer * 2;

        if (letter == '1') {
            decimalAnswer = decimalAnswer + 1;
        } else if (letter != '0') {
            cout << "Error: Only use 0 and 1!" << endl;
            return 1; 
        }
    }

    cout << "Decimal (Base-10)=     " << decimalAnswer << endl;
    cout << "Hexadecimal (Base-16)= " << hex << decimalAnswer << endl;
    cout << "Octal (Base-8)=        " << oct << decimalAnswer << endl;

    return 0;
}


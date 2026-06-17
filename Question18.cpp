#include <iostream>
#include <string>

using namespace std;

int main() {
    string binaryInput;
    int answer = 0;

    // Ask the user to type the binary number
    cout << "Type a binary number: ";
    cin >> binaryInput;

    // Look at each character in the text one by one, from left to right
    for (int i = 0; i < binaryInput.length(); i++) {
        char letter = binaryInput[i];

        // Multiply the current answer by 2 to move to the next placeholder
        answer = answer * 2;

        if (letter == '1') {
            // Add 1 to the answer if the current letter is a 1
            answer = answer + 1;
        } else if (letter != '0') {
            // Stop the program if the user typed something other than 0 or 1
            cout << "Error: You can only type 0s and/or 1s!" << endl;
            return 1; 
        }
    }

    // Print the final regular number to the screen
    cout << "The decimal is: " << answer << endl;

    return 0;
}


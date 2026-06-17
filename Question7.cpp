#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputString;

    cout << "Enter a string of your choice: ";
    cin >> inputString;

    // Check if the string contains the character 'a'
    // string::npos means "until the end of the string" (no match found)
    if (inputString.find('a') != string::npos)
        cout << "Contains 'a'" <<endl;
    else
		cout << "Does not contain 'a'" <<endl;


    return 0;
}


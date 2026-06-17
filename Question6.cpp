#include <iostream>
#include <cctype>

	using namespace std;
	
int main() {
    char letter;
	cout << "Enter a Character: ";
    cin >> letter;

   
    if (isupper(letter) && (letter >= 'A' && letter <= 'Z'))
    cout << "Uppercase letter" <<endl;
    else 
    cout << "Not an uppercase letter" <<endl;
    
    return 0;
}


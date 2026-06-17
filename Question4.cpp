#include <iostream>
#include <string>

using namespace std;
int main() {
	
    string Inputstring;    
    cout << "Enter a string: ";
    cin >> Inputstring;

    if (Inputstring == "hello") 
    cout << "Hello!" <<endl;
    else
    cout << "Goodbye!" <<endl;

    return 0;
}


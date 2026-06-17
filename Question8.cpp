#include <iostream>

using namespace std;

int main() {
	int number;
	
	cout<< "Enter an integer: ";
	cin>> number;
	
	if(number %2 != 0)
	cout<< "Odd number";
	else
	cout<< "Even number";
	return 0;
}

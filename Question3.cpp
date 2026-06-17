#include <iostream>

using namespace std;

int main() {
    int FirstInteger, SecondInteger, ThirdInteger;

    cout << "EnterThree integers: ";
    cin >> FirstInteger>> SecondInteger>> ThirdInteger;

    if (FirstInteger == SecondInteger && SecondInteger == ThirdInteger) 
	cout << "Equal" << endl;
    else
    cout << "Not equal"<<endl;

    return 0;
}


#include <iostream>
#include <string>

using namespace std;



int main() {
	string decision;
	int num1, num2;

	do {
		cout <<"This program will determine if an integer is divisble by another integer." << endl;
		cout << "Please enter the first integer." << endl;
		cin >> num1;
		cout << "Please enter the second integer." << endl;
		cin >> num2;
		if (num1 % num2 == 0) {
			cout << num1 << "is divisble by " << num2 << endl;
		}
		else {
			cout << num1 << "is not divisble by " << num2 << endl;
		}


	}

}
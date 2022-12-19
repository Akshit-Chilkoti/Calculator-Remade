#include <iostream>
using namespace std;

int main(){
	double a;
	double b;
	char opr;
	double result;

	// Taking Input

	cout << "Enter First Number: ";
	cin >> a;
	cout << "Enter Second Number: ";
	cin >> b;

	cout << "Enter + For Addition\n" << "Enter - for Subtraction\n" << "Enter * for Multiplication\n" << "Enter / For Division\n";
	cout << "Enter  Operator: ";
	cin >> opr;

	if (opr = '+') {
		cout << a + b;
	} else if(opr == '-'){
		cout << a-b;
	} else if(opr == '*'){
		cout << a*b;
	} else if(opr == '/'){
		cout << a/b;
	}
	else {
		cout << "Invalid Values!";
	}
	return 0;
}
#include <iostream>
using namespace std;

int main(){
	double a;
	double b;
	double result;
	char opr;

	// Taking Input

	cout << "Enter First Number: ";
	cin >> a;
	cout << "Enter Second Number: ";
	cin >> b;

	cout << "Enter + For Addition\n" << "Enter - for Subtraction\n" << "Enter * for Multiplication\n" << "Enter / For Division\n";
	cout << "Enter  Operator: ";
	cin >> opr;

	switch (opr){
	case '+' :
		cout << a+b;
		break;
	case '-': 
		cout << a-b;
		break;
	case '*':
		cout << a*b;
		break;
	case '/':
		cout << a/b;
		break;
	defalut:
		cout << "No Such Operator!";
		break;
	return 0;
}
}
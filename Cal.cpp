#include <iostream>

using namespace std;

int main(){
	double a;
	double b;
	double r;
	char f;

	cout << "enter the first number: ";
	cin >> a;
	cout << "enter the function";
	cin >> f;
	cout << "enter the second number";
	cin >> b;

	if (f=='+'){
	r=a+b;
	}

	if (f=='*'){
        r=a*b;
        }

	if (f=='-'){
        r=a-b;
        }

	if (f=='/'){
        r=a/b;
        }

	cout << endl << "The result is: " <<  r;
}

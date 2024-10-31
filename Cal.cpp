#include <iostream>
using namespace std;

int main(){
	int a;
	int b;
	int r;
	char f;

	cin >> a;
	cin >> b;
	cin >> f;

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
}

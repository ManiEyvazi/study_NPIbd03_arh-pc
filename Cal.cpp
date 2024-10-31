// It's just a testing file without debugging

#include <iostream>
using namespace std;

int main(){
	int firstNum;
	int secondNum;
	int result;
	char function;

	cin >> firstNum;
	cin >> secondNum;

	if (function=='+'){
	result=firstNum+secondNum;
	}

	if (function=='-'){
        result=firstNum-secondNum;
	}

	if (function=='*'){
        result=firstNum*secondNum;
	}

	if (function=='/'){
        result=firstNum/secondNum;
	}

	cout << result;

}

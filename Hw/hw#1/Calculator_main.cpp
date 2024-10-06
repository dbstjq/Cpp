#include <iostream>
using namespace std;

#include "calculator.h"

int main() {

	int x, y;
	char c;

	cout << "두 정수와 연산자를 입력하세요>>";
	cin >> x >> y >> c;
	if (c == '+' ) {
		Add a;
		a.setValue(x, y);
		cout << a.calculate() << endl;
	}
	else if (c == '-') {
		Sub s;
		s.setValue(x, y);
		cout << s.calculate() << endl;
	}
	else if (c == '*') {
		
		Mul m;
		m.setValue(x, y);
		cout << m.calculate() << endl;
	}
	else if (c == '/') {
		Div d;
		d.setValue(x, y);
		cout << d.calculate() << endl;
	}
}
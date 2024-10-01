#include <iostream>
using namespace std;
 
class Add{
private:
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculate();
};

class Sub {
private:
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculate();
};

class Mul {
private:
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculate();
};

class Div {
private:
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculate();
};


void Add::setValue(int x, int y) {
	a = x;
	b = y;
}
int Add::calculate() {
	return a + b;
}

void Sub::setValue(int x, int y) {
	a = x;
	b = y;
}
int Sub::calculate() {
	return a - b;
}

void Mul::setValue(int x, int y) {
	a = x;
	b = y;
}
int Mul::calculate() {
	return a * b;
}

void Div::setValue(int x, int y) {
	a = x;
	b = y;
}
int Div::calculate() {
	return a / b;
}


int main() {

	int x, y;
	char c;
	Add a;
	Sub s;
	Mul m;
	Div d;


	cout << "�� ������ �����ڸ� �Է��ϼ���>>";
	cin >> x >> y >> c;
	if (c == '+' ) {
		a.setValue(x, y);
		cout << a.calculate() << endl;
	}
	else if (c == '-') {
		s.setValue(x, y);
		cout << s.calculate() << endl;
	}
	else if (c == '*') {
		m.setValue(x, y);
		cout << m.calculate() << endl;
	}
	else if (c == '/') {
		d.setValue(x, y);
		cout << d.calculate() << endl;
	}
}
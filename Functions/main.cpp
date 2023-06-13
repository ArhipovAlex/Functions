#include<iostream>
using namespace std;

int Add(int a, int b = 0);//прототип функции
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);
double Power(int a, int b);
int Modul(int a);
int Factor(int a);
//Default arguments, parameters

void main() {
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Add(a, b);//вызов (использование) функции
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Sub(a, b) << endl;
	cout << a << "*" << b << "=" << Mul(a, b) << endl;
	cout << a << "/" << b << "=" << Div(a, b) << endl;
	cout << a << "^" << b << "=" << Power(a, b) << endl;
	cout << "(" << a << ")!=" << Factor(a) << endl;
}

int Add(int a, int b) { //реализация (определение) функции
	int c = a + b;
	return c;
}
int Sub(int a, int b) {
	return a - b;
}
int Mul(int a, int b) {
	return a * b;
}
double Div(int a, int b) {
	return (double)a / b;
}
double Power(int a, int b) {
	int pow = 1;
	for (int i = 0; i < Modul(b); i++) {
		pow *= a;
	}
	return (b < 0 ? 1. / pow : pow);
}
int Modul(int a) {
	return (a > 0 ? a : -a);
}
int Factor(int a) {
	int f = 1;
	for (int i = 1; i < a+1; i++) {
		f *= i;
	}
	return f;
}
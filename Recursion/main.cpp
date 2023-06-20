#include<iostream>
#include<conio.h>
using namespace std;

#define tab "\t"

//#define ELEVATOR //лифт
#define FACTOR //факториал числа
//#define POWER
//#define FIBONACCI_NUMBER //число в пределе последовательности Фибоначчи
//#define FIBONACCI_QUANT //количество членов Фибоначчи

void elevator(int floor);
int factorial(int number);
double power(int num, int ext);
void Fibonacci_Num(int num, int a = 0, int b = 1);
void Fibonacci_Quant(int num, int a=0, int b=1);


void main() {
	setlocale(LC_ALL, "rus");
	/*cout << "Hello Recursion";
	cout << "Для выхода нажмите Escape, для продолжения нажмите любую клавишу...";
	if(_getch()!=27)main();*/
#ifdef ELEVATOR
	int floor;
	cout << "Введите номер этажа "; cin >> floor;
	elevator(floor);
#endif // ELEVATOR
#ifdef FACTOR
	int number_f;
	do
	{
	cout << "Введите число для нахождения факториала "; cin >> number_f;
	} while (number_f<0);
	cout << number_f << "!=" << factorial(number_f);
#endif // FACTOR
#ifdef POWER
	int number_p, ext;
	cout << "Введите число и степень "; cin >> number_p>>ext;
	cout << number_p << "^" << ext << "=" << power(number_p, ext);
#endif // POWER

#ifdef FIBONACCI_NUMBER
	int num_fib;
	cout << "Введите число число из последовательности Фибоначчи "; cin >> num_fib;
	Fibonacci_Num(num_fib);
#endif // FIBONACCI_NUMBER

#ifdef FIBONACCI_QUANT
	int q_fib;
	cout << "Введите число количества членов последовательности Фибоначчи "; cin >> q_fib;
	Fibonacci_Quant(q_fib);
#endif // FIBONACCI_QUANT

}

void elevator(int floor) {
	if (floor == 0) {
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << " этаже" << endl;
	elevator(floor-1);
}

int factorial(int number) {
		return number>0?number*factorial(number - 1):1;
}

double power(int num, int ext) {
	return ext==0?1:ext>0?num*power(num,ext-1):1/power(num,-ext);
}

void Fibonacci_Num(int num, int a, int b) {
	if (a+b > num) {
		cout << a << tab<<b<<tab;
		return;
	}
	cout << a << tab;
	int buff = a;
	a = b;
	b = a + buff;
	Fibonacci_Num(num, a, b);
}

void Fibonacci_Quant(int num, int a, int b) {
	if (num == 0) {
		return;
	}
	cout << a<<tab;
	int buff = a;
	a = b;
	b = a + buff;
	Fibonacci_Quant(num - 1, a, b);
}
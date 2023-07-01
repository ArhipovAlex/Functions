#include"stdafx.h"
#include"Constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Sum.h"
#include"Avg.h"
#include"MinValueIn.h"
#include"MaxValueIn.h"
#include"ShiftLeft.h"
#include"ShiftRight.h"

void main() {
	setlocale(LC_ALL, "rus");
	const int n = 10;

	cout << "Целочисленный массив: ";
	int arr[n] = {};
	FillRand(arr, n);
	Print(arr, n);
	cout << endl;
	cout << "Массив после сортировки: ";
	Sort(arr, n);
	Print(arr, n);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальный элемент массива: " << MinValueIn(arr, n) << endl;
	cout << "Максимальный элемент массива: " << MaxValueIn(arr, n) << endl;
	int stepLeft = 2;
	ShiftLeft(arr, n, stepLeft);
	cout << "Массив после смещения влево на " << stepLeft << endl;
	Print(arr, n);
	cout << endl;
	int stepRight = 2;
	ShiftRight(arr, n, stepRight);
	cout << "Массив после смещения вправо на " << stepRight<< endl;
	Print(arr, n);
	cout << endl;
	cout << endl;

	cout << "Вещественный массив: ";
	double brr[n] = {};
	FillRand(brr, n);
	Print(brr, n);
	cout << endl;
	Sort(brr, n);
	cout << "Массив после сортировки: ";
	Print(brr, n);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(brr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, n) << endl;
	cout << "Минимальный элемент массива: " << MinValueIn(brr, n) << endl;
	cout << "Максимальный элемент массива: " << MaxValueIn(brr, n) << endl;
	ShiftLeft(brr, n, stepLeft);
	cout << "Массив после смещения влево на " << stepLeft << endl;
	Print(brr, n);
	cout << endl;
	ShiftRight(brr, n, stepRight);
	cout << "Массив после смещения вправо на " << stepRight << endl;
	Print(brr, n);
	cout << endl;
}
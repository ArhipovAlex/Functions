#include"stdafx.h"
#include"Constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"
#include"Shift.h"


#define INT_ARR //одномерный массив целых чисел
#define DOUBLE_ARR //одномерный массив вещественных чисел
#define CHAR_ARR //одномерный массив символов
#define INT_ARR_2 //двумерный массив целых чисел
#define DOUBLE_ARR_2 //двумерный массив вещественных чисел
#define CHAR_ARR_2 //двумерный массив символов

/*void main() {
	setlocale(LC_ALL, "rus");
	const int n = 10;
	int stepLeft = 1;
	int stepRight = 2;
#ifdef INT_ARR
	cout << "ЦЕЛОЧИСЛЕННЫЙ МАССИВ: ";
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
	ShiftLeft(arr, n, stepLeft);
	cout << "Массив после смещения влево на " << stepLeft << endl;
	Print(arr, n);
	cout << endl;
	ShiftRight(arr, n, stepRight);
	cout << "Массив после смещения вправо на " << stepRight<< endl;
	Print(arr, n);
	cout << endl;
	cout << endl;
#endif // INT_ARR

#ifdef DOUBLE_ARR
	cout << "ВЕЩЕСТВЕННЫЙ МАССИВ: ";
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
	cout << endl;
#endif // DOUBLE_ARR

#ifdef CHAR_ARR
	cout << "СИМВОЛЬНЫЙ МАССИВ: ";
	char crr[n] = {};
	FillRand(crr, n);
	Print(crr, n);
	cout << endl;
	cout << "Массив после сортировки: ";
	Sort(crr, n);
	Print(crr, n);
	cout << endl;
	cout << "Первый по таблице символов элемент массива: " << MinValueIn(crr, n) << endl;
	cout << "Последний по таблице символов элемент массива: " << MaxValueIn(crr, n) << endl;
	ShiftLeft(crr, n, stepLeft);
	cout << "Массив после смещения влево на " << stepLeft << endl;
	Print(crr, n);
	cout << endl;
	ShiftRight(crr, n, stepRight);
	cout << "Массив после смещения вправо на " << stepRight << endl;
	Print(crr, n);
	cout << endl;
	cout << endl;
#endif // CHAR_ARR
	
#ifdef INT_ARR_2
	cout << "ДВУМЕРНЫЙ ЦЕЛОЧИСЛЕННЫЙ МАССИВ: "<<endl;
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Массив после сортировки: " << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальный элемент массива: " << MinValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальный элемент массива: " << MaxValueIn(i_arr_2, ROWS, COLS) << endl;
	ShiftLeft(i_arr_2, ROWS, COLS, stepLeft);
	cout << "Массив после смещения влево на " << stepLeft << endl;
	Print(i_arr_2, ROWS, COLS);
	ShiftRight(i_arr_2, ROWS, COLS, stepRight);
	cout << "Массив после смещения вправо на " << stepRight << endl;
	Print(i_arr_2, ROWS, COLS);
	cout << endl;
#endif // INT_ARR_2

#ifdef DOUBLE_ARR_2
	cout << "ДВУМЕРНЫЙ МАССИВ ВЕЩЕСТВЕННЫХ ЧИСЕЛ: " << endl;
	double d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Массив после сортировки: " << endl;
	Sort(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимальный элемент массива: " << MinValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимальный элемент массива: " << MaxValueIn(d_arr_2, ROWS, COLS) << endl;
	ShiftLeft(d_arr_2, ROWS, COLS, stepLeft);
	cout << "Массив после смещения влево на " << stepLeft << endl;
	Print(d_arr_2, ROWS, COLS);
	ShiftRight(d_arr_2, ROWS, COLS, stepRight);
	cout << "Массив после смещения вправо на " << stepRight << endl;
	Print(d_arr_2, ROWS, COLS);
	cout << endl;
#endif // DOUBLE_ARR_2

#ifdef CHAR_ARR_2
	cout << "ДВУМЕРНЫЙ МАССИВ СИМВОЛОВ: " << endl;
	char c_arr_2[ROWS][COLS];
	FillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);	cout << "Массив после сортировки: " << endl;
	Sort(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "Первый по таблице символов элемент массива: " << MinValueIn(c_arr_2, ROWS, COLS) << endl;
	cout << "Последний по таблице символов элемент массива: " << MaxValueIn(c_arr_2, ROWS, COLS) << endl;
	ShiftLeft(c_arr_2, ROWS, COLS, stepLeft);
	cout << "Массив после смещения влево на " << stepLeft << endl;
	Print(c_arr_2, ROWS, COLS);
	ShiftRight(c_arr_2, ROWS, COLS, stepRight);
	cout << "Массив после смещения вправо на " << stepRight << endl;
	Print(c_arr_2, ROWS, COLS);
	cout << endl;
#endif // CHAR_ARR_2


}
*/
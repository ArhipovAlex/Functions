#include<iostream>
using namespace std;

#define tab "\t"

const int ROWS = 3;
const int COLS = 4;

template <class T> void FillRand(T arr[], int size);
template <class T> void Print(T arr[], int size);
template <class T> void Sort(T arr[], int size);
template <class T> T Sum(T arr[], int size);
template <class T> double Avg(T arr[], int size);
template <class T> T MinValueIn(T arr[], int size);
template <class T> T MaxValueIn(T arr[], int size);
template <class T> void ShiftLeft(T arr[], int size, int step);
template <class T> void ShiftRight(T arr[], int size, int step);

template <class T> void FillRand(T arr[ROWS][COLS], int rows, int cols);
template <class T> void Print(T arr[ROWS][COLS], int rows, int cols);
template <class T> void Sort(T arr[ROWS][COLS], int rows, int cols);
template <class T> T Sum(T arr[ROWS][COLS], int rows, int cols);
template <class T> double Avg(T arr[ROWS][COLS], int rows, int cols);
template <class T> T MinValueIn(T arr[ROWS][COLS], int rows, int cols);
template <class T> T MaxValueIn(T arr[ROWS][COLS], int rows, int cols);
template <class T> void ShiftLeft(T arr[ROWS][COLS], int rows, int cols, int step);
template <class T> void ShiftRight(T arr[ROWS][COLS], int rows, int cols, int step);



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
	cout << endl;

	cout << "ДВУМЕРНЫЙ ЦЕЛОЧИСЛЕННЫЙ МАССИВ: " << endl;
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
}

template <class T> void FillRand(T arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = (rand() % 100)/10.;
	}
}

template <class T> void FillRand(T arr[ROWS][COLS], int rows, int cols) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = (rand() % 100) / 10.;
		}
	}
}

template <class T> void Print(T arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << tab;
	}
}
template <class T> void Print(T arr[ROWS][COLS], int rows, int cols) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}
template <class T> void Sort(T arr[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i+1; j < size; j++) {
			if (arr[j] < arr[i]) {
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

template <class T> void Sort(T arr[ROWS][COLS], int rows, int cols) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int k = i; k < ROWS; k++) {
				for (int l = k == i ? j + 1 : 0; l < COLS; l++) {
					if (arr[k][l] < arr[i][j]) {
						T buff = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buff;
					}
				}
			}
		}
	}
}

template <class T> T Sum(T arr[], int size) {
	T sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}

template <class T> T Sum(T arr[ROWS][COLS], int rows, int cols) {
	T sum = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			sum += arr[i][j];
		}
	}
	return sum;
}

template <class T> double Avg(T arr[], int size) {
	return (double)Sum(arr, size) / size;
}

template <class T> double Avg(T arr[ROWS][COLS], int rows, int cols) {
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

template <class T> T MinValueIn(T arr[], int size) {
	T min = arr[0];
	for (int i = 1; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	return min;
}
template <class T> T MinValueIn(T arr[ROWS][COLS], int rows, int cols) {
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (arr[i][j] < min) {
				min = arr[i][j];
			}
		}
	}
	return min;
}

template <class T> T MaxValueIn(T arr[], int size) {
	T max = arr[0];
	for (int i = 1; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	return max;
}
template <class T> T MaxValueIn(T arr[ROWS][COLS], int rows, int cols) {
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
			}
		}
	}
	return max;
}

template <class T> void ShiftLeft(T arr[], int size, int step) {
	for (int i = 0; i < step; i++) {
		T buffer = arr[0];
		for (int j = 1; j < size; j++) {
			arr[j-1] = arr[j];
		}
		arr[size-1] = buffer;
	}
}
template <class T> void ShiftLeft(T arr[ROWS][COLS], int rows, int cols, int step) {
	for (int s = 0; s < step; s++) {
		T buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++) {
			for (int j = 1; j < COLS + 1; j++) {
				arr[i][j - 1] = arr[j == COLS ? i + 1 : i][j == COLS ? 0 : j];
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}

template <class T> void ShiftRight(T arr[], int size, int step) {
	for (int i = 0; i < step; i++) {
		T buffer = arr[size-1];
		for (int j = size-1; j >=0; j--) {
			arr[j] = arr[j-1];
		}
		arr[0] = buffer;
	}
}
template <class T> void ShiftRight(T arr[ROWS][COLS], int rows, int cols, int step) {
	for (int s = 0; s < step; s++) {
		T buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--) {
			for (int j = COLS - 1; j >= 0; j--) {
				arr[i][j] = arr[i][j - 1];
			}
		}
		arr[0][0] = buffer;
	}
}
#include<iostream>
using namespace std;

#define tab "\t"

template <class T> void FillRand(T arr[], int size);
template <class T> void Print(T arr[], int size);
template <class T> void Sort(T arr[], int size);
template <class T> T Sum(T arr[], int size);
template <class T> double Avg(T arr[], int size);
template <class T> T MinValueIn(T arr[], int size);
template <class T> T MaxValueIn(T arr[], int size);
template <class T> void ShiftLeft(T arr[], int size, int step);
template <class T> void ShiftRight(T arr[], int size, int step);

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

template <class T> void FillRand(T arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = (rand() % 100)/10.;
	}
}

template <class T> void Print(T arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << tab;
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

template <class T> T Sum(T arr[], int size) {
	T sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}

template <class T> double Avg(T arr[], int size) {
	return (double)Sum(arr, size) / size;
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

template <class T> T MaxValueIn(T arr[], int size) {
	T max = arr[0];
	for (int i = 1; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
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

template <class T> void ShiftRight(T arr[], int size, int step) {
	for (int i = 0; i < step; i++) {
		T buffer = arr[size-1];
		for (int j = size-1; j >=0; j--) {
			arr[j] = arr[j-1];
		}
		arr[0] = buffer;
	}
}
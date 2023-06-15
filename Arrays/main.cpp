#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], int size);
void FillRand(double arr[], int size);

void Print(int arr[], int size);
void Print(double arr[], int size);

void Sort(int arr[], int size);
void Sort(double arr[], int size);

int Sum(int arr[], int size);
double Sum(double arr[], int size);

double Avg(int arr[], int size);
double Avg(double arr[], int size);

int MinValueIn(int arr[], int size);
double MinValueIn(double arr[], int size);

int MaxValueIn(int arr[], int size);
double MaxValueIn(double arr[], int size);

void ShiftLeft(int arr[], int size, int step);
void ShiftLeft(double arr[], int size, int step);

void ShiftRight(int arr[], int size, int step);
void ShiftRight(double arr[], int size, int step);

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

void FillRand(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand()/100.;
	}
}

void Print(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << tab;
	}
}
void Print(double arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << tab;
	}
}

void Sort(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i+1; j < size; j++) {
			if (arr[j] < arr[i]) {
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i+1; j < size; j++) {
			if (arr[j] < arr[i]) {
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

int Sum(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}

double Avg(int arr[], int size) {
	return (double)Sum(arr, size) / size;
}
double Avg(double arr[], int size) {
	return (double)Sum(arr, size) / size;
}

int MinValueIn(int arr[], int size) {
	int min = arr[0];
	for (int i = 1; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	return min;
}
double MinValueIn(double arr[], int size) {
	int min = arr[0];
	for (int i = 1; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	return min;
}

int MaxValueIn(int arr[], int size) {
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	return max;
}
double MaxValueIn(double arr[], int size) {
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	return max;
}

void ShiftLeft(int arr[], int size, int step) {
	for (int i = 0; i < step; i++) {
		int buffer = arr[0];
		for (int j = 1; j < size; j++) {
			arr[j-1] = arr[j];
		}
		arr[size-1] = buffer;
	}
}
void ShiftLeft(double arr[], int size, int step) {
	for (int i = 0; i < step; i++) {
		double buffer = arr[0];
		for (int j = 1; j < size; j++) {
			arr[j-1] = arr[j];
		}
		arr[size-1] = buffer;
	}
}

void ShiftRight(int arr[], int size, int step) {
	for (int i = 0; i < step; i++) {
		int buffer = arr[size-1];
		for (int j = size-1; j >=0; j--) {
			arr[j] = arr[j-1];
		}
		arr[0] = buffer;
	}
}
void ShiftRight(double arr[], int size, int step) {
	for (int i = 0; i < step; i++) {
		double buffer = arr[size-1];
		for (int j = size-1; j >=0; j--) {
			arr[j] = arr[j-1];
		}
		arr[0] = buffer;
	}
}
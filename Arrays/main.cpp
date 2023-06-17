#include<iostream>
using namespace std;

#define tab "\t"

#define INT_ARR //одномерный массив целых чисел
#define DOUBLE_ARR //одномерный массив вещественных чисел
#define CHAR_ARR //одномерный массив символов
#define INT_ARR_2 //двумерный массив целых чисел
#define DOUBLE_ARR_2 //двумерный массив вещественных чисел
#define CHAR_ARR_2 //двумерный массив символов

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], int size);
void FillRand(double arr[], int size);
void FillRand(char arr[], int size);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], int size);
void Print(double arr[], int size);
void Print(char arr[], int size);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], int size);
void Sort(double arr[], int size);
void Sort(char arr[], int size);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], int size);
double Sum(double arr[], int size);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], int size);
double Avg(double arr[], int size);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);

int MinValueIn(int arr[], int size);
double MinValueIn(double arr[], int size);
char MinValueIn(char arr[], int size);
int MinValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MinValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char MinValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

int MaxValueIn(int arr[], int size);
double MaxValueIn(double arr[], int size);
char MaxValueIn(char arr[], int size);
int MaxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MaxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char MaxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

void ShiftLeft(int arr[], int size, int step);
void ShiftLeft(double arr[], int size, int step);
void ShiftLeft(char arr[], int size, int step);
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int step);
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int step);
void ShiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int step);

void ShiftRight(int arr[], int size, int step);
void ShiftRight(double arr[], int size, int step);
void ShiftRight(char arr[], int size, int step);
void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int step);
void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int step);
void ShiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int step);

void main() {
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

void FillRand(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = (rand()%100)/10.;
	}
}
void FillRand(char arr[], int size) {
	for (int i = 0; i < size; i++) {
		if ((rand() % 10) / 2 == 0) {//случайное число проверяем на четность, если четное то верхний регистр иначе нижний
			arr[i] = static_cast<char>(rand() % (90 - 65) + 65);//генерация буквы в верхнем регистре
		}
		else {
			arr[i] = static_cast<char>(rand() % (122-97)+97);//генерация буквы в нижнем регистре
		}
		
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = (rand() % 100) / 10.;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if ((rand() % 10) / 2 == 0) {//случайное число проверяем на четность, если четное то верхний регистр иначе нижний
				arr[i][j] = static_cast<char>(rand() % (90 - 65) + 65);//генерация буквы в верхнем регистре
			}
			else {
				arr[i][j] = static_cast<char>(rand() % (122 - 97) + 97);//генерация буквы в нижнем регистре
			}
		}
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
void Print(char arr[], int size) {
		for (int i = 0; i < size; i++) {
		cout << arr[i] << tab;
	}
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout<<arr[i][j]<<tab;
		}
		cout << endl;
	}
}
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << arr[i][j] << tab;
		}
		cout << endl;
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
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(char arr[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (static_cast<int>(arr[j]) < static_cast<int>(arr[i])) {
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int k = i; k < ROWS; k++) {
				for (int l = k == i ? j + 1 : 0; l < COLS; l++) {
					//arr[i][j] - выбранный
					//arr[k][l] - перебираемый
					if (arr[k][l] < arr[i][j]) {
						int buff = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buff;
					}
				}
			}
		}
	}
}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int k = i; k < ROWS; k++) {
				for (int l = k == i ? j + 1 : 0; l < COLS; l++) {
					//arr[i][j] - выбранный
					//arr[k][l] - перебираемый
					if (arr[k][l] < arr[i][j]) {
						double buff = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buff;
					}
				}
			}
		}
	}
}
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int k = i; k < ROWS; k++) {
				for (int l = k == i ? j + 1 : 0; l < COLS; l++) {
					//arr[i][j] - выбранный
					//arr[k][l] - перебираемый
					if (static_cast<int>(arr[k][l]) < static_cast<int>(arr[i][j])) {
						char buff = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buff;
					}
				}
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
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	int sum = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			sum+=arr[i][j];
		}
	}
	return sum;
}
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	double sum = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			sum += arr[i][j];
		}
	}
	return sum;
}

double Avg(int arr[], int size) {
	return (double)Sum(arr, size) / size;
}
double Avg(double arr[], int size) {
	return Sum(arr, size) / size;
}
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
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
char MinValueIn(char arr[], int size) {
	char min = arr[0];
	for (int i = 1; i < size; i++) {
		if (static_cast<int>(min) > static_cast<int>(arr[i])) {
			min = arr[i];
		}
	}
	return min;
}
int MinValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (arr[i][j] < min) {
				min = arr[i][j];
			}
		}
	}
	return min;
}
double MinValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (arr[i][j] < min) {
				min = arr[i][j];
			}
		}
	}
	return min;
}
char MinValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	char min = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (static_cast<int>(min) > static_cast<int>(arr[i][j])) {
				min = arr[i][j];
			}
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
char MaxValueIn(char arr[], int size) {
	char max = arr[0];
	for (int i = 1; i < size; i++) {
		if (static_cast<int>(max) < static_cast<int>(arr[i])) {
			max = arr[i];
		}
	}
	return max;
}
int MaxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
			}
		}
	}
	return max;
}
double MaxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
			}
		}
	}
	return max;
}
char MaxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	char max = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (static_cast<int>(max) < static_cast<int>(arr[i][j])) {
				max = arr[i][j];
			}
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
void ShiftLeft(char arr[], int size, int step) {
	for (int i = 0; i < step; i++) {
		char buffer = arr[0];
		for (int j = 1; j < size; j++) {
			arr[j - 1] = arr[j];
		}
		arr[size - 1] = buffer;
	}
}
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int step) {
	for (int s = 0; s < step; s++) {
		int buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++) {
			for (int j = 1; j < COLS+1; j++) {
				arr[i][j-1] = arr[j==COLS?i+1:i][j==COLS?0:j];
				//проверка
				/*
				cout << "В элемент [" << i << "][" << j - 1 << "] записываем элемент [" << (j == COLS ? i + 1 : i) << "][" << (j == COLS ? 0 : j) << "]" << endl;
				Print(arr, ROWS, COLS);
				cout << endl;
				*/
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int step) {
	for (int s = 0; s < step; s++) {
		double buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++) {
			for (int j = 1; j < COLS + 1; j++) {
				arr[i][j - 1] = arr[j == COLS ? i + 1 : i][j == COLS ? 0 : j];
				//проверка
				/*
				cout << "В элемент [" << i << "][" << j - 1 << "] записываем элемент [" << (j == COLS ? i + 1 : i) << "][" << (j == COLS ? 0 : j) << "]" << endl;
				Print(arr, ROWS, COLS);
				cout << endl;
				*/
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}
void ShiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int step) {
	for (int s = 0; s < step; s++) {
		char buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++) {
			for (int j = 1; j < COLS + 1; j++) {
				arr[i][j - 1] = arr[j == COLS ? i + 1 : i][j == COLS ? 0 : j];
				//проверка
				/*
				cout << "В элемент [" << i << "][" << j - 1 << "] записываем элемент [" << (j == COLS ? i + 1 : i) << "][" << (j == COLS ? 0 : j) << "]" << endl;
				Print(arr, ROWS, COLS);
				cout << endl;
				*/
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
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
void ShiftRight(char arr[], int size, int step) {
	for (int i = 0; i < step; i++) {
		char buffer = arr[size - 1];
		for (int j = size - 1; j >= 0; j--) {
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}
void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int step) {
	for (int s = 0; s < step; s++) {
		int buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS-1; i >=0; i--) {
			for (int j = COLS-1; j >=0; j--) {
				arr[i][j] = arr[i][j-1];
				//проверка
				/*
				cout << "В элемент [" << i << "][" << j << "] записываем элемент [" << i << "][" << j-1 << "]" << endl;
				Print(arr, ROWS, COLS);
				cout << endl;
				*/
			}
		}
		arr[0][0] = buffer;
	}
}
void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int step) {
	for (int s = 0; s < step; s++) {
		double buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--) {
			for (int j = COLS - 1; j >= 0; j--) {
				arr[i][j] = arr[i][j - 1];
				//проверка
				/*
				cout << "В элемент [" << i << "][" << j << "] записываем элемент [" << i << "][" << j-1 << "]" << endl;
				Print(arr, ROWS, COLS);
				cout << endl;
				*/
			}
		}
		arr[0][0] = buffer;
	}
}
void ShiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int step) {
	for (int s = 0; s < step; s++) {
		char buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--) {
			for (int j = COLS - 1; j >= 0; j--) {
				arr[i][j] = arr[i][j - 1];
				//проверка
				/*
				cout << "В элемент [" << i << "][" << j << "] записываем элемент [" << i << "][" << j-1 << "]" << endl;
				Print(arr, ROWS, COLS);
				cout << endl;
				*/
			}
		}
		arr[0][0] = buffer;
	}
}
#include"Statistics.h"

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
			sum += arr[i][j];
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
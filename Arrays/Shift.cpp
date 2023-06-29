#include"Shift.h"

void ShiftLeft(int arr[], int size, int step) {
	for (int i = 0; i < step; i++) {
		int buffer = arr[0];
		for (int j = 1; j < size; j++) {
			arr[j - 1] = arr[j];
		}
		arr[size - 1] = buffer;
	}
}
void ShiftLeft(double arr[], int size, int step) {
	for (int i = 0; i < step; i++) {
		double buffer = arr[0];
		for (int j = 1; j < size; j++) {
			arr[j - 1] = arr[j];
		}
		arr[size - 1] = buffer;
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
		int buffer = arr[size - 1];
		for (int j = size - 1; j >= 0; j--) {
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}
void ShiftRight(double arr[], int size, int step) {
	for (int i = 0; i < step; i++) {
		double buffer = arr[size - 1];
		for (int j = size - 1; j >= 0; j--) {
			arr[j] = arr[j - 1];
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
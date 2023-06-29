#include"Sort.h"

void Sort(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
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
		for (int j = i + 1; j < size; j++) {
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
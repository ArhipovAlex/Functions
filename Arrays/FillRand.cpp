#include"FillRand.h"
#include"stdafx.h"

void FillRand(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = (rand() % 100) / 10.;
	}
}
void FillRand(char arr[], int size) {
	for (int i = 0; i < size; i++) {
		if ((rand() % 10) / 2 == 0) {//��������� ����� ��������� �� ��������, ���� ������ �� ������� ������� ����� ������
			arr[i] = static_cast<char>(rand() % (90 - 65) + 65);//��������� ����� � ������� ��������
		}
		else {
			arr[i] = static_cast<char>(rand() % (122 - 97) + 97);//��������� ����� � ������ ��������
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
			if ((rand() % 10) / 2 == 0) {//��������� ����� ��������� �� ��������, ���� ������ �� ������� ������� ����� ������
				arr[i][j] = static_cast<char>(rand() % (90 - 65) + 65);//��������� ����� � ������� ��������
			}
			else {
				arr[i][j] = static_cast<char>(rand() % (122 - 97) + 97);//��������� ����� � ������ ��������
			}
		}
	}
}
#pragma once
#include"Constants.h"
#include"stdafx.h"

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
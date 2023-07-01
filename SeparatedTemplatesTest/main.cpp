#include<iostream>
using namespace std;

#include<FillRand.h>
#include<Print.h>
#include<Sort.h>
#include<Sum.h>
#include<Avg.h>
#include<MinValueIn.h>
#include<MaxValueIn.h>
#include<ShiftLeft.h>
#include<ShiftRight.h>

void main() {
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << endl;
	cout << "������ ����� ����������: ";
	Sort(arr, n);
	Print(arr, n);
	cout << endl;
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� ������� �������: " << MinValueIn(arr, n) << endl;
	cout << "������������ ������� �������: " << MaxValueIn(arr, n) << endl;
	int stepLeft = 2;
	ShiftLeft(arr, n, stepLeft);
	cout << "������ ����� �������� ����� �� " << stepLeft << endl;
	Print(arr, n);
	cout << endl;
	int stepRight = 2;
	ShiftRight(arr, n, stepRight);
	cout << "������ ����� �������� ������ �� " << stepRight << endl;
	Print(arr, n);
}
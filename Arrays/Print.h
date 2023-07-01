//Print.h
#pragma once
#include"stdafx.h"
#include"Constants.h"


template <class T> void Print(T arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << tab;
	}
}
//ShiftLeft.h
#pragma once

template <class T> void ShiftLeft(T arr[], int size, int step) {
	for (int i = 0; i < step; i++) {
		T buffer = arr[0];
		for (int j = 1; j < size; j++) {
			arr[j - 1] = arr[j];
		}
		arr[size - 1] = buffer;
	}
}
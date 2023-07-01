//ShiftRight.h
#pragma once

template <class T> void ShiftRight(T arr[], int size, int step) {
	for (int i = 0; i < step; i++) {
		T buffer = arr[size - 1];
		for (int j = size - 1; j >= 0; j--) {
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}
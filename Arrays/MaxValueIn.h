//MaxValueIn.h
#pragma once

template <class T> T MaxValueIn(T arr[], int size) {
	T max = arr[0];
	for (int i = 1; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	return max;
}
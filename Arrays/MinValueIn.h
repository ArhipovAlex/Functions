//MinValueIn.h
#pragma once

template <class T> T MinValueIn(T arr[], int size) {
	T min = arr[0];
	for (int i = 1; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	return min;
}
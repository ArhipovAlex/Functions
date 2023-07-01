//FillRand.h
#pragma once

template <class T> void FillRand(T arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = (rand() % 100) / 10.;
	}
}
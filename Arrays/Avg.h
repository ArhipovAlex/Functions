//Avg.h
#pragma once

template <class T> double Avg(T arr[], int size) {
	return (double)Sum(arr, size) / size;
}
/* 
 * File:   quicksort.cpp
 * Author: Orillion
 *
 * Created on February 28, 2015, 9:01 AM
 */

#include "quicksort.h"

void quicksort(int *A, int low, int high) {
	int p;
	if (low < high) {
		p = partition(A, low, high);
		quicksort(A, low, p - 1);
		quicksort(A, p + 1, high);
	}
}

int partition(int *A, int low, int high) {
	int pivotIndex = ((high - low) / 2) + low;
	int pivotValue = A[pivotIndex];
	int storeIndex = low;
	// Put the chosen pivot at A[high]
	swap(A, pivotIndex, high);
	for (int i = low; i < high; i++) {
		if (A[i] < pivotValue) {
			swap(A, i, storeIndex);
			storeIndex++;
		}
	}
	swap(A, storeIndex, high);
	return storeIndex;
}

void swap(int *A, int a, int b) {
	int temp = A[a];
	A[a] = A[b];
	A[b] = temp;
}
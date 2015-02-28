/* 
 * File:   quicksort.h
 * Author: Orillion
 *
 * Created on February 28, 2015, 9:01 AM
 */

#ifndef QUICKSORT_H
#define	QUICKSORT_H

/**
 * Quick sorts an array of integers.
 * @param A Array to be sorted. Sorted array is returned here.
 * @param low Left most index.
 * @param high Right most index.
 */
void quicksort(int *A, int low, int high);

/**
 * Partitions an array of Integers.
 * @param A Array to be partitioned.
 * @param low Left most index.
 * @param high Right most index.
 * @return Returns a pivot index.
 */
int partition(int *A, int low, int high);

/**
 * Swaps the location of two integers in an array.
 * @param A Array in which to swap the integers
 * @param a Location of first integer.
 * @param b Location of second integer.
 */
void swap(int *A, int a, int b);

#endif	/* QUICKSORT_H */


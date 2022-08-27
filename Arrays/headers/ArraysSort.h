#ifndef ARRAYS_SORT_H_
#define ARRAYS_SORT_H_

#include "ArraysDefines.h"

void bubbleSort(int *array, const int length, enum SortingDirection direction);
void selectionSort(int *array, const int length, enum SortingDirection direction);
void insertionSort(int *array, const int length, enum SortingDirection direction);
void mergeSort(int array[], const int left, const int right);
void quickSort(int array[], const int left, const int right);

#endif // ARRAYS_SORT_H_
#ifndef SORT_ARRAY_H_
#define SORT_ARRAY_H_

#include "Defines.h"

void bubbleSort(int *array, const int length, enum SortingDirection direction);
void selectionSort(int *array, const int length, enum SortingDirection direction);
void insertionSort(int *array, const int length, enum SortingDirection direction);
void mergeSort(int array[], const int left, const int right);
void quickSort(int array[], const int left, const int right);

#endif
//------------------------------------------------------
// NAME: Aleks Bozhinov
// PROBLEM: Arrays implementation
// FILE NAME: ArraysSort.h
// FILE PURPOSE:
// The struct Arrays methods declarations for sorting
// algorithms in arrays.
//------------------------------------------------------

#ifndef ARRAYS_SORT_H_
#define ARRAYS_SORT_H_

#include "ArraysDefines.h"

void arraysBubbleSort   (int* array, const int arraySize, SortingDirection direction);
void arraysSelectionSort(int* array, const int arraySize, SortingDirection direction);
void arraysInsertionSort(int* array, const int arraySize, SortingDirection direction);
void arraysMergeSort    (int* array, const int leftEdge, const int rightEdge);
void arraysQuickSort    (int* array, const int leftEdge, const int rightEdge);

#endif // ARRAYS_SORT_H_
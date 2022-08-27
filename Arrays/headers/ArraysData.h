//------------------------------------------------------
// NAME: Aleks Bozhinov
// PROBLEM: Arrays implementation
// FILE NAME: ArraysData.h
// FILE PURPOSE:
// The struct Arrays methods manageing data methods
// declarations.
//------------------------------------------------------

#ifndef ARRAYS_DATA_H_
#define ARRAYS_DATA_H_

#include <stdbool.h>

void arraysCopyOf     (const int* originalArray, const int originalArraySize, int* copyArray, const int copyArraySize);
void arraysCopyOfRange(const int* originalArray, const int originalArraySize, int* copyArray, const int copyArraySize,
                            const int indexFrom, const int indexTo);
bool arraysEquals     (const int* leftArray, const int leftArraySize, const int* rightArray, const int rightArraySize);
void arraysFill       (int* array, const int arraySize, const int value);
void arraysFillAt     (int* array, const int arraySize, const int value, const int indexAt);


#endif // ARRAYS_DATA_H_
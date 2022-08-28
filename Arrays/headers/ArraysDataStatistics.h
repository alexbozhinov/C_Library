//------------------------------------------------------
// NAME: Aleks Bozhinov
// PROBLEM: Arrays implementation
// FILE NAME: ArraysDataStatistics.h
// FILE PURPOSE:
// The struct Arrays methods declarations for processing the
// data contained in the array.
//------------------------------------------------------

#ifndef ARRAYS_DATA_STATISTICS_H_
#define ARRAYS_DATA_STATISTICS_H_

int    arraysMax            (const int* array, const int arraySize);
int    arraysMin            (const int* array, const int arraySize);
int    arraysSum            (const int* array, const int arraySize);
double arraysAverage        (const int* array, const int arraySize);
int    arraysFrequencyOf    (const int* array, const int arraySize, const int value);
void   arraysFrequency      (const int* array, const int arraySize);
int    arraysDistinct       (int* array, const int arraySize);
int    arraysCountOfDistinct(const int* array, const int arraySize);

#endif // ARRAYS_DATA_STATISTICS_H_
//------------------------------------------------------
// NAME: Aleks Bozhinov
// PROBLEM: Arrays implementation
// FILE NAME: Arrays.h
// FILE PURPOSE:
// The Arrays's main header file, including the definition
// of struct Arrays and function pointers to all it's
// methods, also declaration of Arrays constructor
//------------------------------------------------------

#ifndef ARRAYS_H_
#define ARRAYS_H_

#include <stdio.h>
#include "ArraysInputOutput.h"
#include "ArraysSort.h"
#include "ArraysSearch.h"
#include "ArraysData.h"
#include "ArraysDataStatistics.h"

typedef struct Arrays
{
    void   (*input)(int *, const int);
    void   (*toString)(const int *, const int);
    void   (*bubbleSort)(int *, const int, enum SortingDirection);
    void   (*selectionSort)(int *, const int, enum SortingDirection);
    void   (*insertionSort)(int *, const int, enum SortingDirection);
    void   (*mergeSort)(int *, const int, const int);
    void   (*quickSort)(int *, const int, const int);
    int    (*linearSearch)(const int *, const int, const int);
    int    (*binarySearch)(const int *, const int, const int, const int);
    int    (*ternarySearch)(const int *, const int, const int, const int);
    void   (*copyOf)(const int *, const int, int *, const int);
    void   (*copyOfRange)(const int *, const int, int *, const int, const int, const int);
    bool   (*equals)(const int *, const int, const int *, const int);
    void   (*fill)(int *, const int, const int);
    void   (*fillAt)(int *, const int, const int, const int);
    int    (*max)(const int *, const int);
    int    (*min)(const int *, const int);
    int    (*sum)(const int *, const int);
    double (*average)(const int *, const int);
    int    (*frequencyOf)(const int *, const int, const int);
    void   (*frequency)(const int *, const int);
    int    (*distinct)(int *, const int);
    int    (*countOfDistinct)(const int *, const int);

} Arrays;

Arrays ArraysConstructor();

#endif // ARRAYS_H_
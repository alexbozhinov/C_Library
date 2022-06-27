#ifndef ARRAYS_H_
#define ARRAYS_H_

#include <stdio.h>
#include "InputOutput.h"
#include "SortArray.h"
#include "Search.h"

typedef struct Arrays
{
    void (*input)(int *, const int);
    void (*toString)(const int *, const int);
    void (*bubbleSort)(int *, const int, enum SortingDirection);
    void (*selectionSort)(int *, const int, enum SortingDirection);
    void (*insertionSort)(int *, const int, enum SortingDirection);
} Arrays;

Arrays arraysInit();

#endif
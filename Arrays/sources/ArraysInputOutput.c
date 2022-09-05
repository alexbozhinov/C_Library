//------------------------------------------------------
// NAME: Aleks Bozhinov
// PROBLEM: Arrays implementation
// FILE NAME: ArraysInputOutput.c
// FILE PURPOSE:
// The struct Arrays implementations of methods manageing
// the input and output streams of the array.
//------------------------------------------------------

#include <stdio.h>
#include "../headers/ArraysInputOutput.h"

//------------------------------------------------------
// FUNCTION: arraysInputArray
// Function where elements of array are inputed.
// PARAMETERS:
// array     -> the array
// arraySize -> the size of the array
//------------------------------------------------------

void arraysInputArray(int* array, const int arraySize)
{
    int arrayIdx = 0;

    printf("Input %d array elements: ", arraySize);

    for (arrayIdx = 0; arrayIdx < arraySize; arrayIdx++)
    {
        scanf("%d", &array[arrayIdx]);
    }
}

//------------------------------------------------------
// FUNCTION: arraysToString
// Function where elements of array are printed.
// PARAMETERS:
// array     -> the array
// arraySize -> the size of the array
//------------------------------------------------------

void arraysToString(const int* array, const int arraySize)
{
    if(arraySize > 0)
    {
        int lastIdx  = arraySize - 1;
        int arrayIdx = 0;

        printf("[ ");

        for (arrayIdx = 0; arrayIdx < lastIdx; arrayIdx++)
        {
            printf("%d, ", array[arrayIdx]);
        }

        printf("%d ]\n", array[lastIdx]);
    }
    else 
    {
        printf("[]\n");
    }
}
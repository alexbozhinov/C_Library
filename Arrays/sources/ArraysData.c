//------------------------------------------------------
// NAME: Aleks Bozhinov
// PROBLEM: Arrays implementation
// FILE NAME: ArraysData.c
// FILE PURPOSE:
// Implementations of data management functions for the
// Arrays struct.
//------------------------------------------------------

#include <stdio.h>
#include "../headers/ArraysData.h"

//------------------------------------------------------
// FUNCTION: arraysCopyOf
// Function where array's elements are coppied into
// the copy array.
// PARAMETERS:
// originalArray     -> the original array
// originalArraySize -> the length of the original array
// copyArray         -> the coppied array
// copyArraySize     -> the length of the new array after copying
//------------------------------------------------------

void arraysCopyOf(const int* originalArray, const int originalArraySize, int* copyArray, const int copyArraySize)
{
    int arrayIdx = 0;
    // TODO: validate if copyLength is less than the original
    for (arrayIdx = 0; arrayIdx < copyArraySize; arrayIdx++)
    {
        copyArray[arrayIdx] = 0;
    }

    for (arrayIdx = 0; arrayIdx < originalArraySize; arrayIdx++)
    {
        copyArray[arrayIdx] = originalArray[arrayIdx];
    }
}

//------------------------------------------------------
// FUNCTION: arraysCopyOfRange
// Function where a range of array's elements are coppied
// into the copy array.
// PARAMETERS:
// originalArray     -> the original array
// originalArraySize -> the length of the original array
// copyArray         -> the copy array
// copyArraySize     -> the length of the new array after copying
// indexFrom         -> the index from which the array is coppied
// indexTo           -> the index to which the array is coppied
//------------------------------------------------------

void arraysCopyOfRange(const int* originalArray, const int originalArraySize,
                       int* copyArray, const int copyArraySize,
                       const int indexFrom, const int indexTo)
{
    int arrayIdx = 0;
    int copyIdx  = 0;

    if (indexFrom > indexTo)
    {
        printf("End index bigger than the starting!\n");
        return;
    }
    if (indexFrom > originalArraySize - 1 || indexTo > originalArraySize - 1 || indexFrom < 0 || indexTo < 0)
    {
        printf("Indexes out of bounds!\n");
        return;
    }
    if (copyArraySize < (indexTo - indexFrom + 1))
    {
        printf("Copy array out of bounds!\n");
        return;
    }

    for (arrayIdx = 0; arrayIdx < copyArraySize; arrayIdx++)
    {
        copyArray[arrayIdx] = 0;
    }

    for (arrayIdx = indexFrom; arrayIdx <= indexTo; arrayIdx++)
    {
        copyArray[copyIdx] = originalArray[arrayIdx];
        copyIdx++;
    }
}

//------------------------------------------------------
// FUNCTION: arraysEquals
// Function which returns whether two arrays are equal.
// PARAMETERS:
// leftArray      -> the left array of the equation
// leftArraySize  -> the length of the left array
// rightArray     -> the right array of the equation
// rightArraySIze -> the length of the right array
//------------------------------------------------------

bool arraysEquals(const int* leftArray, const int leftArraySize, const int* rightArray, const int rightArraySize)
{
    int arrayIdx = 0;
    bool equal   = false;

    if(leftArraySize == rightArraySize)
    {
        equal = true;

        for (arrayIdx = 0; arrayIdx < leftArraySize; arrayIdx++)
        {
            if (leftArray[arrayIdx] != rightArray[arrayIdx])
            {
                equal = false;
                break;
            }
        }
    }

    return equal;
}

//------------------------------------------------------
// FUNCTION: arraysFill
// Function where an array is filled with a specific value.
// PARAMETERS:
// array     -> the original array
// arraySize -> the length of the original array
// value     -> the value which fills the array
//------------------------------------------------------

void arraysFill(int* array, const int arraySize, const int value)
{
    int arrayIdx = 0;

    for (arrayIdx = 0; arrayIdx < arraySize; arrayIdx++)
    {
        array[arrayIdx] = value;
    }
}

//------------------------------------------------------
// FUNCTION: arraysFillAt
// Function where a specific element of the array is filled
// with a specific value.
// PARAMETERS:
// array     -> the original array
// arraySize -> the length of the original array
// value     -> the value which fills the array
// indexAt   -> the index on which the element is filled
//------------------------------------------------------

void arraysFillAt(int* array, const int arraySize, const int value, const int indexAt)
{
    if (indexAt < 0 || indexAt > arraySize - 1)
    {
        printf("Index out of bounds!\n");
        return;
    }

    array[indexAt] = value;
}

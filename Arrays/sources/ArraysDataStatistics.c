//------------------------------------------------------
// NAME: Aleks Bozhinov
// PROBLEM: Arrays implementation
// FILE NAME: ArraysDataStatistics.c
// FILE PURPOSE:
// The struct Arrays methods implementations for processing
// the data contained in the array.
//------------------------------------------------------

#include <stdio.h>
#include "../headers/ArraysDataStatistics.h"

//------------------------------------------------------
// FUNCTION: arraysMax
// Function which returns the biggest element of the array.
// PARAMETERS:
// array     -> the array
// arraySize -> the size of the array
//------------------------------------------------------

int arraysMax(const int* array, const int arraySize)
{
    int maxElement = array[0];
    int arraysIdx  = 0;

    for (arraysIdx = 0; arraysIdx < arraySize; arraysIdx++)
    {
        if (array[arraysIdx] > maxElement)
        {
            maxElement = array[arraysIdx];
        }
    }

    return maxElement;
}

//------------------------------------------------------
// FUNCTION: arraysMin
// Function which returns the smallest element of the array.
// PARAMETERS:
// array     -> the array
// arraySize -> the size of the array
//------------------------------------------------------

int arraysMin(const int* array, const int arraySize)
{
    int minElement = array[0];
    int arrayIdx   = 0;

    for (arrayIdx = 0; arrayIdx < arraySize; arrayIdx++)
    {
        if (array[arrayIdx] < minElement)
        {
            minElement = array[arrayIdx];
        }
    }

    return minElement;
}

//------------------------------------------------------
// FUNCTION: arraysSum
// Function which returns the sum of all elements of the array.
// PARAMETERS:
// array     -> the array
// arraySize -> the size of the array
//------------------------------------------------------

int arraysSum(const int* array, const int arraySize)
{
    int arraySum = 0;
    int arrayIdx = 0;

    for (arrayIdx = 0; arrayIdx < arraySize; arrayIdx++)
    {
        arraySum += array[arrayIdx];
    }

    return arraySum;
}

//------------------------------------------------------
// FUNCTION: arraysAverage
// Function which returns the average value of all elements
// of the array.
// PARAMETERS:
// array     -> the array
// arraySize -> the size of the array
//------------------------------------------------------

double arraysAverage(const int* array, const int arraySize)
{
    return sum(array, arraySize) / (arraySize * 1.0);
}

//------------------------------------------------------
// FUNCTION: arraysFrequencyOf
// Function which returns the frequency of occurance of
// the value inside the array.
// PARAMETERS:
// array     -> the array
// arraySize -> the size of the array
// value     -> the value whose frequency of occurrence
// is searched 
//------------------------------------------------------

int arraysFrequencyOf(const int* array, const int arraySize, const int value)
{
    int valueFrequency = 0;
    int arrayIdx       = 0;

    for (arrayIdx = 0; arrayIdx < arraySize; arrayIdx++)
    {
        if (array[arrayIdx] == value)
        {
            valueFrequency++;
        }
    }

    return valueFrequency;
}

//------------------------------------------------------
// FUNCTION: arraysFrequency
// Function which returns the frequency of occurance of
// each element of the array.
// PARAMETERS:
// array     -> the array
// arraySize -> the size of the array
//------------------------------------------------------

void arraysFrequency(const int* array, const int arraySize)
{
    int elementsFrequency[arraySize];
    int arrayIdx     = 0;
    int arrayRestIdx = 0;

    for (arrayIdx = 0; arrayIdx < arraySize; arrayIdx++)
    {
        int count = 1;

        for (arrayRestIdx = arrayIdx + 1; arrayRestIdx < arraySize; arrayRestIdx++)
        {
            if (array[arrayIdx] == array[arrayRestIdx])
            {
                count++;
                elementsFrequency[arrayRestIdx] = 0;
            }
        }

        if (elementsFrequency[arrayIdx] != 0)
        {
            elementsFrequency[arrayIdx] = count;
        }
    }

    printf("\nThe Frequency of the elements in this Array is: \n");
    
    for (arrayIdx = 0; arrayIdx < arraySize; arrayIdx++)
    {
        if (elementsFrequency[arrayIdx] != 0)
        {
            printf("%d occurs %d times \n", array[arrayIdx], elementsFrequency[arrayIdx]);
        }
    }
}

//------------------------------------------------------
// FUNCTION: arraysDistinct
// Function which returns the number of distinct elements
// of the array and removes the elements of the array which
// occur more than once.
// PARAMETERS:
// array     -> the array
// arraySize -> the size of the array
//------------------------------------------------------

int arraysDistinct(int* array, const int arraySize)
{
    int tempArray[arraySize];
    int newArraySize = 0;
    int arrayIdx     = 0;

    if (0 == arraySize || 1 == arraySize)
    {
        newArraySize = arraySize;
    }
    else
    {
        for (arrayIdx = 0; arrayIdx < arraySize - 1; arrayIdx++)
        {
            if (array[arrayIdx] != array[arrayIdx + 1])
            {
                tempArray[newArraySize++] = array[arrayIdx];
            }
        }

        tempArray[newArraySize++] = array[arraySize - 1];

        for (arrayIdx = 0; arrayIdx < arraySize; arrayIdx++)
        {
            array[arrayIdx] = tempArray[arrayIdx];
        }
    }

    return newArraySize;
}

//------------------------------------------------------
// FUNCTION: arraysCountOfDistinct
// Function which returns the number of distinct elements
// of the array.
// PARAMETERS:
// array     -> the array
// arraySize -> the size of the array
//------------------------------------------------------

int arraysCountOfDistinct(const int* array, const int arraySize)
{
    int countOfDistinct = 1;
    int arrayIdx        = 0;
    int arrayPrevIdx    = 0;

    for (arrayIdx = 1; arrayIdx < arraySize; arrayIdx++)
    {
        for (arrayPrevIdx = 0; arrayPrevIdx < arrayIdx; arrayPrevIdx++)
        {
            if (array[arrayIdx] == array[arrayPrevIdx])
            {
                break;
            }
        }

        if (arrayIdx == arrayPrevIdx)
        {
            countOfDistinct++;
        }
    }

    return countOfDistinct;
}

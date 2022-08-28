//------------------------------------------------------
// NAME: Aleks Bozhinov
// PROBLEM: Arrays implementation
// FILE NAME: ArraysSerch.c
// FILE PURPOSE:
// The struct Arrays methods implementations for searching 
// algorithms in arrays.
//------------------------------------------------------

#include "../headers/ArraysSearch.h"

//------------------------------------------------------
// FUNCTION: linearSearch
// Function which returns the index of the searched element
// if it exists using linear searching algorithm.
// PARAMETERS:
// array          -> the array
// arraySize      -> the size of the array
// searchedNumber -> the searched number
//------------------------------------------------------

int linearSearch (const int* array, const int arraySize, const int searchedNumber)
{
    int arrayIdx          = 0;
    int searchedNumberIdx = -1;

    for (arrayIdx = 0; arrayIdx < arraySize; arrayIdx++)
    {
        if (array[arrayIdx] == searchedNumber)
        {
            searchedNumberIdx = arrayIdx;
        }
    }

    return searchedNumberIdx;
}

//------------------------------------------------------
// FUNCTION: binarySearch
// Function which returns the index of the searched element
// if it exists using binary searching algorithm.
// PARAMETERS:
// array          -> the array
// leftEdge       -> the left edge of a subarray
// rightEdge      -> the right edge of a subarray
// searchedNumber -> the searched number
//------------------------------------------------------

int binarySearch (const int* array, const int leftEdge, const int rightEdge, const int searchedNumber)
{
    int searchedNumberIdx = -1;

    if (rightEdge >= leftEdge)
    {
        int middleIdx = leftEdge + (rightEdge - leftEdge) / 2; // = left + right/2 - left/2 = left/2 + right/2 = (left + right) / 2

        if (array[middleIdx] == searchedNumber)
        {
            searchedNumberIdx = middleIdx;
        }

        if (array[middleIdx] > searchedNumber)
        {
            return binarySearch(array, leftEdge, middleIdx - 1, searchedNumber);
        }

        return binarySearch(array, middleIdx + 1, rightEdge, searchedNumber);
    }

    return searchedNumberIdx;
}

//------------------------------------------------------
// FUNCTION: ternarySearch
// Function which returns the index of the searched element
// if it exists using ternary searching algorithm.
// PARAMETERS:
// array          -> the array
// leftEdge       -> the left edge of a subarray
// rightEdge      -> the right edge of a subarray
// searchedNumber -> the searched number
//------------------------------------------------------

int ternarySearch(const int* array, const int leftEdge, const int rightEdge, const int searchedNumber)
{
    int searchedNumberIdx = -1;

    if (rightEdge >= leftEdge)
    {
        int middleLeftIdx  = leftEdge + (rightEdge - leftEdge) / 3;
        int middleRightIdx = rightEdge - (rightEdge - leftEdge) / 3;

        if (array[middleLeftIdx] == searchedNumber)
        {
            searchedNumberIdx = middleLeftIdx;
        }
        if (array[middleRightIdx] == searchedNumber)
        {
            searchedNumberIdx = middleRightIdx;
        }

        if (searchedNumber < array[middleLeftIdx])
        {

            return ternarySearch(array, leftEdge, middleLeftIdx - 1, searchedNumber);
        }
        else if (searchedNumber > array[middleRightIdx])
        {

            return ternarySearch(array, middleRightIdx + 1, rightEdge, searchedNumber);
        }
        else
        {
            return ternarySearch(array, middleLeftIdx + 1, middleRightIdx - 1, searchedNumber);
        }
    }

    return searchedNumberIdx;
}
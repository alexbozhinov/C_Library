//------------------------------------------------------
// NAME: Aleks Bozhinov
// PROBLEM: Arrays implementation
// FILE NAME: ArraysSort.c
// FILE PURPOSE:
// The struct Arrays methods implementations for sorting 
// algorithms in arrays.
//------------------------------------------------------

#include <stdio.h>
#include "../headers/ArraysSort.h"

static void arraysSwap                   (int* left, int* right);
static void arraysBubbleSortAscending    (int* array, const int arraySize);
static void arraysBubbleSortDescending   (int* array, const int arraySize);
static void arraysSelectionSortAscending (int* array, const int arraySize);
static void arraysSelectionSortDescending(int* array, const int arraySize);
static void arraysInsertionSortAscending (int* array, const int arraySize);
static void arraysInsertionSortDescending(int* array, const int arraySize);
static void arraysMerge                  (int* array, const int left, const int middle, const int right);
static int  arraysPartition              (int* array, const int low, const int high);

//------------------------------------------------------
// FUNCTION: arraySwap
// Function where the position of 2 elements are swapped.
// PARAMETERS:
// left  -> the left element
// right -> the right element
//------------------------------------------------------

static void arraysSwap(int* left, int* right)
{
    int temp = *left;
    *left    = *right;
    *right   = temp;
}

//------------------------------------------------------
// FUNCTION: arrayBubbleSort
// Function where depending on parameter's direction value,
// function for ascending or descending order of bubble
// sort algorithm is being called.
// PARAMETERS:
// array     -> the array to be sorted
// arraySize -> the size of the array
// direction -> ASCENDING or DESCENDING
//------------------------------------------------------

void arraysBubbleSort(int* array, const int arraySize, SortingDirection direction)
{
    switch (direction)
    {
    case ASCENDING:
        arraysBubbleSortAscending(array, arraySize);
        break;
    case DESCENDING:
        arraysBubbleSortDescending(array, arraySize);
        break;
    default:
        printf("Missing or incorrect direction parameter!\n");
        break;
    }
}

//------------------------------------------------------
// FUNCTION: arrayBubbleSortAscending
// Function where bubble sort algorithm in ascending
// order is implemented.
// PARAMETERS:
// array     -> the array to be sorted
// arraySize -> the size of the array
//------------------------------------------------------

static void arraysBubbleSortAscending(int* array, const int arraySize)
{
    int arrayFirstCircuitIdx  = 0;
    int arraySecondCircuitIdx = 0;

    for (arrayFirstCircuitIdx = 0; arrayFirstCircuitIdx < arraySize - 1; arrayFirstCircuitIdx++)
    {
        for (arraySecondCircuitIdx = 0; arraySecondCircuitIdx < arraySize - arrayFirstCircuitIdx - 1; arraySecondCircuitIdx++)
        {
            if (array[arraySecondCircuitIdx] > array[arraySecondCircuitIdx + 1])
            {
                swap(&array[arraySecondCircuitIdx], &array[arraySecondCircuitIdx + 1]);
            }
        }
    }
}

//------------------------------------------------------
// FUNCTION: arrayBubbleSortDescending
// Function where bubble sort algorithm in descending
// order is implemented.
// PARAMETERS:
// array     -> the array to be sorted
// arraySize -> the size of the array
//------------------------------------------------------

static void arraysBubbleSortDescending(int* array, const int arraySize)
{
    int arrayFirstCircuitIdx  = 0;
    int arraySecondCircuitIdx = 0;

    for (arrayFirstCircuitIdx = 0; arrayFirstCircuitIdx < arraySize - 1; arrayFirstCircuitIdx++)
    {
        for (arraySecondCircuitIdx = 0; arraySecondCircuitIdx < arraySize - arrayFirstCircuitIdx - 1; arraySecondCircuitIdx++)
        {
            if (array[arraySecondCircuitIdx] < array[arraySecondCircuitIdx + 1])
            {
                swap(&array[arraySecondCircuitIdx], &array[arraySecondCircuitIdx + 1]);
            }
        }
    }
}

//------------------------------------------------------
// FUNCTION: arraySelectionSort
// Function where depending on parameter's direction value,
// function for ascending or descending order of selection
// sort algorithm is being called.
// PARAMETERS:
// array     -> the array to be sorted
// arraySize -> the size of the array
// direction -> ASCENDING or DESCENDING
//------------------------------------------------------

void arraysSelectionSort(int* array, const int arraySize, SortingDirection direction)
{
    switch (direction)
    {
    case ASCENDING:
        arraysSelectionSortAscending(array, arraySize);
        break;
    case DESCENDING:
        arraysSelectionSortDescending(array, arraySize);
        break;
    default:
        printf("Missing or incorrect direction parameter!\n");
        break;
    }
}

//------------------------------------------------------
// FUNCTION: arraySelectionSortAscending
// Function where selection sort algorithm in ascending
// order is implemented.
// PARAMETERS:
// array     -> the array to be sorted
// arraySize -> the size of the array
//------------------------------------------------------

static void arraysSelectionSortAscending(int* array, const int arraySize)
{
    int minElementIdx    = 0;
    int arrayIdx         = 0;
    int arrayUnsortedIdx = 0;

    for (arrayIdx = 0; arrayIdx < arraySize - 1; arrayIdx++)
    {
        minElementIdx = arrayIdx;

        for (arrayUnsortedIdx = arrayIdx + 1; arrayUnsortedIdx < arraySize; arrayUnsortedIdx++)
        {
            if (array[arrayUnsortedIdx] < array[minElementIdx])
            {
                minElementIdx = arrayUnsortedIdx;
            }
        }

        swap(&array[minElementIdx], &array[arrayIdx]);
    }
}

//------------------------------------------------------
// FUNCTION: arraySelectionSortDescending
// Function where selection sort algorithm in descending
// order is implemented.
// PARAMETERS:
// array     -> the array to be sorted
// arraySize -> the size of the array
//------------------------------------------------------

static void arraysSelectionSortDescending(int* array, const int arraySize)
{
    int maxElementIdx    = 0;
    int arrayIdx         = 0;
    int arrayUnsortedIdx = 0;

    for (arrayIdx = 0; arrayIdx < arraySize - 1; arrayIdx++)
    {
        maxElementIdx = arrayIdx;

        for (arrayUnsortedIdx = arrayIdx + 1; arrayUnsortedIdx < arraySize; arrayUnsortedIdx++)
        {
            if (array[arrayUnsortedIdx] > array[maxElementIdx])
            {
                maxElementIdx = arrayUnsortedIdx;
            }
        }

        swap(&array[maxElementIdx], &array[arrayIdx]);
    }
}

//------------------------------------------------------
// FUNCTION: arrayInsertionSort
// Function where depending on parameter's direction value,
// function for ascending or descending order of insertion
// sort algorithm is being called.
// PARAMETERS:
// array     -> the array to be sorted
// arraySize -> the size of the array
// direction -> ASCENDING or DESCENDING
//------------------------------------------------------

void arraysInsertionSort(int* array, const int arraySize, SortingDirection direction)
{
    switch (direction)
    {
    case ASCENDING:
        insertionSortAscending(array, arraySize);
        break;
    case DESCENDING:
        insertionSortDescending(array, arraySize);
        break;
    default:
        printf("Missing or incorrect direction parameter!\n");
        break;
    }
}

//------------------------------------------------------
// FUNCTION: arrayInsertionSortAscending
// Function where insertion sort algorithm in ascending
// order is implemented.
// PARAMETERS:
// array     -> the array to be sorted
// arraySize -> the size of the array
//------------------------------------------------------

static void arraysInsertionSortAscending(int* array, const int arraySize)
{
    int arrayIdx            = 0;
    int currentUnorderedIdx = 0;

    for (arrayIdx = 1; arrayIdx < arraySize; arrayIdx++)
    {
        currentUnorderedIdx = arrayIdx;

        while (currentUnorderedIdx > 0 && array[currentUnorderedIdx] < array[currentUnorderedIdx - 1])
        {
            int temp                       = array[currentUnorderedIdx];
            array[currentUnorderedIdx]     = array[currentUnorderedIdx - 1];
            array[currentUnorderedIdx - 1] = temp;

            currentUnorderedIdx--;
        }
    }
}

//------------------------------------------------------
// FUNCTION: arrayInsertionSortDescending
// Function where insertion sort algorithm in descending
// order is implemented.
// PARAMETERS:
// array     -> the array to be sorted
// arraySize -> the size of the array
//------------------------------------------------------

static void arraysInsertionSortDescending(int* array, const int arraySize)
{
    int arrayIdx            = 0;
    int currentUnorderedIdx = 0;

    for (arrayIdx = 1; arrayIdx < arraySize; arrayIdx++)
    {
        currentUnorderedIdx = arrayIdx;
        while (currentUnorderedIdx > 0 && array[currentUnorderedIdx] > array[currentUnorderedIdx - 1])
        {
            int temp                       = array[currentUnorderedIdx];
            array[currentUnorderedIdx]     = array[currentUnorderedIdx - 1];
            array[currentUnorderedIdx - 1] = temp;

            currentUnorderedIdx--;
        }
    }
}

void mergeSort(int array[], const int left, const int right)
{
    if (left < right)
    {

        int middle = left + (right - left) / 2;

        // Sort first and second halves
        mergeSort(array, left, middle);
        mergeSort(array, middle + 1, right);

        merge(array, left, middle, right);
    }
}

static void merge(int array[], const int left, const int middle, const int right)
{
    int i = 0, j = 0, k = 0;
    const int length1 = middle - left + 1;
    const int length2 = right - middle;

    int leftArray[length1], rightArray[length2];

    for (i = 0; i < length1; i++)
    {
        leftArray[i] = array[left + i];
    }
    for (j = 0; j < length2; j++)
    {
        rightArray[j] = array[middle + 1 + j];
    }

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;    // Initial index of first subarray
    j = 0;    // Initial index of second subarray
    k = left; // Initial index of merged subarray

    while (i < length1 && j < length2)
    {
        if (leftArray[i] <= rightArray[j])
        {
            array[k] = leftArray[i];
            i++;
        }
        else
        {
            array[k] = rightArray[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
    are any */
    while (i < length1)
    {
        array[k] = leftArray[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
    are any */
    while (j < length2)
    {
        array[k] = rightArray[j];
        j++;
        k++;
    }
}

void quickSort(int array[], const int left, const int right)
{
    if (left < right)
    {
        int pivot = partition(array, left, right);

        quickSort(array, left, pivot - 1);
        quickSort(array, pivot + 1, right);
    }
}

static int partition(int array[], const int left, const int right)
{
    int pivot = array[right];

    int i = (left - 1);

    for (int j = left; j <= right - 1; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }

    swap(&array[i + 1], &array[right]);

    return (i + 1);
}

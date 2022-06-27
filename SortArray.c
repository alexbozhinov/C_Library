#include <stdio.h>
#include "SortArray.h"

static void swap(int *left, int *right);
static void bubbleSortAscending(int array[], const int length);
static void bubbleSortDescending(int array[], const int length);
static void selectionSortAscending(int array[], const int length);
static void selectionSortDescending(int array[], const int length);
static void insertionSortAscending(int array[], const int length);
static void insertionSortDescending(int array[], const int length);
static void merge(int array[], const int left, const int middle, const int right);
static int partition(int array[], const int low, const int high);

static void swap(int *left, int *right)
{
    int temp = *left;
    *left = *right;
    *right = temp;
}

void bubbleSort(int *array, const int length, enum SortingDirection direction)
{
    switch (direction)
    {
    case 1:
        bubbleSortAscending(array, length);
        break;
    case -1:
        bubbleSortDescending(array, length);
        break;
    default:
        printf("Missing or incorrect direction parameter!\n");
        break;
    }
}

static void bubbleSortAscending(int array[], const int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

static void bubbleSortDescending(int array[], const int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

void selectionSort(int *array, const int length, enum SortingDirection direction)
{
    switch (direction)
    {
    case 1:
        selectionSortAscending(array, length);
        break;
    case -1:
        selectionSortDescending(array, length);
        break;
    default:
        printf("Missing or incorrect direction parameter!\n");
        break;
    }
}

static void selectionSortAscending(int array[], const int length)
{
    int minIdx = 0;

    for (int i = 0; i < length - 1; i++)
    {
        minIdx = i;
        for (int j = i + 1; j < length; j++)
        {
            if (array[j] < array[minIdx])
            {
                minIdx = j;
            }
        }
        swap(&array[minIdx], &array[i]);
    }
}

static void selectionSortDescending(int array[], const int length)
{
    int maxIdx = 0;

    for (int i = 0; i < length - 1; i++)
    {
        maxIdx = i;
        for (int j = i + 1; j < length; j++)
        {
            if (array[j] > array[maxIdx])
            {
                maxIdx = j;
            }
        }
        swap(&array[maxIdx], &array[i]);
    }
}

void insertionSort(int *array, const int length, enum SortingDirection direction)
{
    switch (direction)
    {
    case 1:
        insertionSortAscending(array, length);
        break;
    case -1:
        insertionSortDescending(array, length);
        break;
    default:
        printf("Missing or incorrect direction parameter!\n");
        break;
    }
}

static void insertionSortAscending(int array[], const int length)
{
    int j = 0;

    for (int i = 1; i < length; i++)
    {
        j = i;
        while (j > 0 && array[j] < array[j - 1])
        {
            int temp = array[j];
            array[j] = array[j - 1];
            array[j - 1] = temp;

            j--;
        }
    }
}

static void insertionSortDescending(int array[], const int length)
{
    int j = 0;

    for (int i = 1; i < length; i++)
    {
        j = i;
        while (j > 0 && array[j] > array[j - 1])
        {
            int temp = array[j];
            array[j] = array[j - 1];
            array[j - 1] = temp;

            j--;
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

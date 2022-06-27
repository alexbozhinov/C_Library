#include <stdio.h>
#include "SortArray.h"

static void swap(int *left, int *right);
static void bubbleSortAscending(int array[], const int length);
static void bubbleSortDescending(int array[], const int length);
static void selectionSortAscending(int array[], const int length);
static void selectionSortDescending(int array[], const int length);
static void insertionSortAscending(int array[], const int length);
static void insertionSortDescending(int array[], const int length);

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

#include "Arrays.h"

static void setMethods(Arrays *arrays);

Arrays arraysInit()
{
    Arrays arrays;
    setMethods(&arrays);

    return arrays;
}

static void setMethods(Arrays *arrays)
{
    arrays->input = inputArray;
    arrays->toString = arraysToString;
    arrays->bubbleSort = bubbleSort;
    arrays->selectionSort = selectionSort;
    arrays->insertionSort = insertionSort;
    arrays->mergeSort = mergeSort;
    arrays->quickSort = quickSort;
    arrays->linearSearch = linearSearch;
    arrays->binarySearch = binarySearch;
    arrays->ternarySearch = ternarySearch;
    arrays->copyOf = copyOf;
    arrays->copyOfRange = copyOfRange;
    arrays->equals = equals;
    arrays->fill = fill;
    arrays->fillAt = fillAt;
    arrays->max = max;
    arrays->min = min;
    arrays->sum = sum;
    arrays->average = average;
    arrays->frequencyOf = frequencyOf;
    arrays->frequency = frequency;
    arrays->distinct = distinct;
    arrays->countOfDistinct = countOfDistinct;
}

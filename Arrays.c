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
    arrays->linearSearch = linearSearch;
    arrays->binarySearch = binarySearch;
    arrays->ternarySearch = ternarySearch;
}

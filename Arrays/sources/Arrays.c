//------------------------------------------------------
// NAME: Aleks Bozhinov
// PROBLEM: Arrays implementation
// FILE NAME: Arrays.c
// FILE PURPOSE:
// The Arrays's main source file, including the implementation
// of struct Arrays's constructor.
//------------------------------------------------------

#include "Arrays.h"

static void setArraysMethods(Arrays *arrays);

//------------------------------------------------------
// FUNCTION: ArraysConstructor
// Function which constructs a struct Arrays and sets it's
// fields.
// PARAMETERS: void
//------------------------------------------------------

Arrays ArraysConstructor()
{
    Arrays arrays;
    setArraysMethods(&arrays);

    return arrays;
}

//------------------------------------------------------
// FUNCTION: setArrayMethods
// Function which sets all struct Arrays's function pointers
// to their real function implementations.
// PARAMETERS:
// arrays -> the address of the struct Arrays which
// is being initialized.
//------------------------------------------------------

static void setArraysMethods(Arrays *arrays)
{
    arrays->input           = inputArray;
    arrays->toString        = arraysToString;
    arrays->bubbleSort      = bubbleSort;
    arrays->selectionSort   = selectionSort;
    arrays->insertionSort   = insertionSort;
    arrays->mergeSort       = mergeSort;
    arrays->quickSort       = quickSort;
    arrays->linearSearch    = linearSearch;
    arrays->binarySearch    = binarySearch;
    arrays->ternarySearch   = ternarySearch;
    arrays->copyOf          = copyOf;
    arrays->copyOfRange     = copyOfRange;
    arrays->equals          = equals;
    arrays->fill            = fill;
    arrays->fillAt          = fillAt;
    arrays->max             = max;
    arrays->min             = min;
    arrays->sum             = sum;
    arrays->average         = average;
    arrays->frequencyOf     = frequencyOf;
    arrays->frequency       = frequency;
    arrays->distinct        = distinct;
    arrays->countOfDistinct = countOfDistinct;
}

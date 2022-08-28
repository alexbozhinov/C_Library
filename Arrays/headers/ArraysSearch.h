//------------------------------------------------------
// NAME: Aleks Bozhinov
// PROBLEM: Arrays implementation
// FILE NAME: ArraysSerch.h
// FILE PURPOSE:
// The struct Arrays methods declarations for searching 
// algorithms in arrays.
//------------------------------------------------------

#ifndef ARRAYS_SEARCH_H_
#define ARRAYS_SEARCH_H_

int linearSearch (const int* array, const int arraySize, const int searchedNumber);
int binarySearch (const int* array, const int leftEdge, const int rightEdge, const int searchedNumber);
int ternarySearch(const int* array, const int leftEdge, const int rightEdge, const int searchedNumber);

#endif // ARRAYS_SEARCH_H_
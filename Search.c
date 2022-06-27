#include "Search.h"

int linearSearch(const int array[], const int length, const int searchedNumber)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i] == searchedNumber)
        {
            return i;
        }
    }

    return -1;
}

int binarySearch(const int array[], const int left, const int right, const int searchedNumber)
{
    if (right >= left)
    {
        int middle = left + (right - left) / 2; // = left + right/2 - left/2 = left/2 + right/2 = (left + right) / 2

        if (array[middle] == searchedNumber)
        {
            return middle;
        }

        if (array[middle] > searchedNumber)
        {
            return binarySearch(array, left, middle - 1, searchedNumber);
        }

        return binarySearch(array, middle + 1, right, searchedNumber);
    }

    return -1;
}

int ternarySearch(const int array[], const int left, const int right, const int searchedNumber)
{
    if (right >= left)
    {
        int middle1 = left + (right - left) / 3;
        int middle2 = right - (right - left) / 3;

        if (array[middle1] == searchedNumber)
        {
            return middle1;
        }
        if (array[middle2] == searchedNumber)
        {
            return middle2;
        }

        if (searchedNumber < array[middle1])
        {

            return ternarySearch(array, left, middle1 - 1, searchedNumber);
        }
        else if (searchedNumber > array[middle2])
        {

            return ternarySearch(array, middle2 + 1, right, searchedNumber);
        }
        else
        {
            return ternarySearch(array, middle1 + 1, middle2 - 1, searchedNumber);
        }
    }

    return -1;
}
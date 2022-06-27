#include <stdio.h>
#include "ArrayData.h"

void copyOf(const int original[], const int length, int copy[], const int newLength)
{
    for (int i = 0; i < newLength; i++)
    {
        copy[i] = 0;
    }

    for (int i = 0; i < length; i++)
    {
        copy[i] = original[i];
    }
}

void copyOfRange(const int original[], const int length, int *copy, const int newLength, const int from, const int to)
{

    if (from > to)
    {
        printf("End index bigger than the starting!\n");
        return;
    }
    if (from > length - 1 || to > length - 1 || from < 0 || to < 0)
    {
        printf("Indexes out of bounds!\n");
        return;
    }
    if (newLength < (to - from + 1))
    {
        printf("Copy array out of bounds!\n");
        return;
    }

    for (int i = 0; i < newLength; i++)
    {
        copy[i] = 0;
    }

    int cpIdx = 0;

    for (int i = from; i <= to; i++)
    {
        copy[cpIdx] = original[i];
        cpIdx++;
    }
}

bool equals(const int left[], const int length1, const int right[], const int length2)
{
    if (length1 != length2)
    {
        return false;
    }

    for (int i = 0; i < length1; i++)
    {
        if (left[i] != right[i])
        {
            return false;
        }
    }

    return true;
}

void fill(int array[], const int length, const int value)
{
    for (int i = 0; i < length; i++)
    {
        array[i] = value;
    }
}

void fillAt(int array[], const int length, const int value, const int idx)
{
    if (idx < 0 || idx > length - 1)
    {
        printf("Index out of bounds!\n");
        return;
    }
    array[idx] = value;
}

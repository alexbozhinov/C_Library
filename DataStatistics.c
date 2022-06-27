#include <stdio.h>
#include "DataStatistics.h"

int max(const int array[], const int length)
{
    int max = array[0];

    for (int i = 0; i < length; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    return max;
}

int min(const int array[], const int length)
{
    int min = array[0];

    for (int i = 0; i < length; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    return min;
}

int sum(const int array[], const int length)
{
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return sum;
}

double average(const int array[], const int length)
{
    return sum(array, length) / length;
}

int frequencyOf(const int array[], const int length, const int value)
{
    int frequency = 0;

    for (int i = 0; i < length; i++)
    {
        if (array[i] == value)
        {
            frequency++;
        }
    }

    return frequency;
}

void frequency(const int array[], const int length)
{
    int frequency[length];

    for (int i = 0; i < length; i++)
    {
        int count = 1;
        for (int j = i + 1; j < length; j++)
        {
            if (array[i] == array[j])
            {
                count++;
                frequency[j] = 0;
            }
        }
        if (frequency[i] != 0)
        {
            frequency[i] = count;
        }
    }
    printf("\nThe Frequency of the elements in this Array is: \n");
    for (int i = 0; i < length; i++)
    {
        if (frequency[i] != 0)
        {
            printf("%d Occurs %d Times \n", array[i], frequency[i]);
        }
    }
}

int distinct(int array[], const int length)
{
    if (length == 0 || length == 1)
        return length;

    int temp[length];

    int newLength = 0;
    for (int i = 0; i < length - 1; i++)
    {
        if (array[i] != array[i + 1])
        {
            temp[newLength++] = array[i];
        }
    }
    temp[newLength++] = array[length - 1];

    for (int i = 0; i < newLength; i++)
    {
        array[i] = temp[i];
    }

    return newLength;
}

int countOfDistinct(const int array[], const int length)
{
    int count = 1;
    int j = 0;

    for (int i = 1; i < length; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (array[i] == array[j])
            {
                break;
            }
        }
        if (i == j)
        {
            count++;
        }
    }

    return count;
}

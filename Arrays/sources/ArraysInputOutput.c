#include <stdio.h>
#include "InputOutput.h"

void inputArray(int *array, const int length)
{
    printf("Input %d array elements: ", length);
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }
}

void arraysToString(const int array[], const int length)
{
    if (length == 0)
    {
        printf("[]\n");
    }
    else
    {
        int iMax = length - 1;
        printf("[ ");
        for (int i = 0; i < length; i++)
        {
            if (i == iMax)
            {
                printf("%d ]\n", array[i]);
                return;
            }
            printf("%d, ", array[i]);
        }
    }
}
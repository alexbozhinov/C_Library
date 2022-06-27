#include "Arrays.h"

int main()
{
    int array[10];

    Arrays arrays = arraysInit();
    arrays.input(array, 10);
    arrays.insertionSort(array, 10, DESCENDING);
    arrays.toString(array, 10);

    return 0;
}
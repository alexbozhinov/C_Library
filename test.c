#include "Arrays.h"

int main()
{
    int array[10];

    Arrays arrays = arraysInit();
    arrays.input(array, 10);
    arrays.insertionSort(array, 10, ASCENDING);
    arrays.toString(array, 10);
    printf("%d\n", arrays.ternarySearch(array, 0, 10, 1));

    return 0;
}
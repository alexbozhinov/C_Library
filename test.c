#include "Arrays.h"

int main()
{
    int array[10];

    Arrays arrays = arraysInit();
    arrays.input(array, 10);
    arrays.insertionSort(array, 10, ASCENDING);
    arrays.toString(array, 10);
    printf("%d\n", arrays.ternarySearch(array, 0, 10, 1));

    int arr[15];
    arrays.copyOfRange(array, 10, arr, 15, 0, 9);
    arrays.toString(arr, 15);
    printf("%d\n", arrays.equals(array, 10, arr, 10));
    arrays.fill(arr, 15, 10);
    arrays.toString(arr, 15);
    arrays.fillAt(array, 10, 22, -1);
    arrays.toString(array, 10);

    return 0;
}
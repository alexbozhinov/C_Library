#ifndef ARRAYS_DATA_H_
#define ARRAYS_DATA_H_

#include <stdbool.h>

void copyOf(const int original[], const int length, int copy[], const int newLength);
void copyOfRange(const int original[], const int length, int* copy, const int newLength, const int from, const int to);
bool equals(const int left[], const int length1, const int right[], const int length2);
void fill(int array[], const int length, const int value);
void fillAt(int array[], const int length, const int value, const int idx);


#endif // ARRAYS_DATA_H_
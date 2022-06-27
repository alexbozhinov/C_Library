#ifndef DATA_STATISTICS_H_
#define DATA_STATISTICS_H_

int max(const int array[], const int length);
int min(const int array[], const int length);
int sum(const int array[], const int length);
double average(const int array[], const int length);
int frequencyOf(const int array[], const int length, const int value);
void frequency(const int array[], const int length);
int distinct(int array[], const int length);
int countOfDistinct(const int array[], const int length);

#endif
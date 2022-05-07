#ifndef QUICKSORT_FUNCTIONS_H
#define QUICKSORT_FUNCTIONS_H

void swap(int *a, int *b);
void quickSort(int arr[], int startIndex, int endIndex);
int partition(int arr[], int firstIndex, int lastIndex);
void printArray(int arr[], int size);

#endif

#include <iostream>
#include "functions.h"

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int startIndex, int endIndex) {
    int pivot = arr[endIndex];

    int i = (startIndex - 1);

    for (int j = startIndex; j <= endIndex - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[endIndex]);

    return i + 1;
}

void quickSort(int arr[], int firstIndex, int lastIndex) {
    if (firstIndex < lastIndex) {
        int p = partition(arr, firstIndex, lastIndex);

        quickSort(arr, firstIndex, p - 1);
        quickSort(arr, p + 1, lastIndex);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}
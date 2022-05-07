#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    int arr[] = {100, 87, 2, 3, 55, 01, 1, 33, 24, 2, 2, 8};

    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "\nArray:\n";

    printArray(arr, length);

    quickSort(arr, 0, length - 1);

    cout << "\nSorted array:\n";

    printArray(arr, length);

    return 0;
}
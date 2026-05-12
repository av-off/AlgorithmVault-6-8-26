#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {

    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {

        if (arr[j] < pivot) {
            i++;

            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return i + 1;
}

void quickSort(int arr[], int low, int high) {

    if (low < high) {

        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

void printArray(int arr[], int size) {

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {

    int arr[] = {64, 34, 25, 12, 22, 11, 90};

    int size = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, size - 1);

    cout << "Sorted Array:" << endl;

    printArray(arr, size);

    return 0;
}

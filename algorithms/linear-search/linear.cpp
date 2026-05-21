#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

int main() {
    int arr[] = {5, 2, 9, 1, 6};
    int n = 5;

    cout << "Index: " << linearSearch(arr, n, 9);
    return 0;
}

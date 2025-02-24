#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int h) {
    int mid = (l + h) / 2;
    int pivot = arr[mid];
    swap(arr[mid], arr[h]); 
    int i = l - 1;
    for (int j = l; j < h; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]); 
    return i + 1;
}

void quicksort(int arr[], int l, int h) {
    if (l < h) {
        int p = partition(arr, l, h);
        quicksort(arr, l, p - 1);
        quicksort(arr, p + 1, h);
    }
}

int main() {
    int arr[] = {4, 2, 1, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n - 1); 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
    return 0;
}

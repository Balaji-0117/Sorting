#include <stdio.h>

// Function to perform selection sort on an array
void Selection_sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        // Find the minimum element in the unsorted part of the array
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_idx]) {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first element of the unsorted part
        int temp = a[min_idx];
        a[min_idx] = a[i];
        a[i] = temp;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // Perform selection sort on the array
    Selection_sort(a, n);
    // Print the sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
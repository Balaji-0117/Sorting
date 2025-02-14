#include <stdio.h>

// Function to perform insertion sort
void insertion_sort(int a[], int n) {
    for (int j = 1; j < n; j++) {
        int flag = 0; // Variable to check if any shifting happened
        int temp = a[j];
        int i = j - 1;
        // Shift elements of a[0..i-1], that are greater than temp, to one position ahead of their current position
        while (i >= 0 && a[i] > temp) {
            flag = 1;
            a[i + 1] = a[i];
            i--;
        }
        if (flag == 0) break; // If no elements were shifted, the array is already sorted
        a[i + 1] = temp;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // Perform insertion sort
    insertion_sort(a, n);
    // Print the sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
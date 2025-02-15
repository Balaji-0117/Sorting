#include <stdio.h>

// Function to perform bubble sort on an array
void Bubble_sort(int a[], int n) {
    int flag = 0; // Variable to check if any swapping happened
    for (int i = 0; i < n - 1; i++) {
        for (int j = 1; j < n - i; j++) {
            if (a[j - 1] > a[j]) {
                // Swap the elements
                flag = 1;
                int temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
        // If no swapping happened, the array is already sorted
        if (flag == 0) break;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // Call the bubble sort function
    Bubble_sort(a, n);
    // Print the sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

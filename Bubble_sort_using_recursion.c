#include <stdio.h>

// Recursive function to perform bubble sort
void bubble_sort(int A[], int n, int i, int j) {
    // Base case: All passes done
    if (i >= n) return;

    // For each pass
    if (j >= n - 1) return;

    // Swap if the current element is greater than the next element
    if (j < n - 1 && A[j] > A[j + 1]) {
        int t = A[j];
        A[j] = A[j + 1];
        A[j + 1] = t;
    }

    // Recursive call for the next element in the current pass
    bubble_sort(A, n, i, j + 1);

    // Recursive call for the next pass
    bubble_sort(A, n, i + 1, 0);
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    // Call the bubble sort function
    bubble_sort(a, n, 0, 0);
    // Print the sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
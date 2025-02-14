#include <stdio.h>

// Function to partition the array
int Partition(int A[], int start, int end) {
    int pivot = A[start]; // Choose the first element as pivot
    int s = start + 1;
    int e = end;
    
    // Loop to place elements smaller than pivot to the left and larger to the right
    while (s <= e) {
        while (s <= e && A[s] <= pivot) {
            s++;
        }
        while (s <= e && A[e] > pivot) {
            e--;
        }
        if (s < e) {
            // Swap elements at s and e
            int temp = A[s];
            A[s] = A[e];
            A[e] = temp;
        }
    }
    
    // Swap pivot with element at e
    int temp = A[start];
    A[start] = A[e];
    A[e] = temp;
    
    return e; // Return the partition index
}

// Function to perform Quick Sort
void Quick_sort(int A[], int start, int end) {
    if (start < end) {
        int p = Partition(A, start, end); // Partition the array
        Quick_sort(A, start, p - 1); // Recursively sort the left part
        Quick_sort(A, p + 1, end); // Recursively sort the right part
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    // Perform Quick Sort on the array
    Quick_sort(A, 0, n - 1);
    
    // Print the sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    
    return 0;
}
#include <stdio.h>

// Function to merge two sorted arrays A and B into array C
void MergeArray(int A[], int B[], int n, int m, int C[]) {
    int i = 0, j = 0, k = 0;
    
    // Merge elements of A and B in sorted order
    while (i < n && j < m) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }
    
    // Copy remaining elements of A, if any
    while (i < n) {
        C[k++] = A[i++];
    }
    
    // Copy remaining elements of B, if any
    while (j < m) {
        C[k++] = B[j++];
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int b[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    
    int t = n + m;
    int c[t];
    
    // Merge arrays A and B into array C
    MergeArray(a, b, n, m, c);
    
    // Print merged array C
    for (int i = 0; i < t; i++) {
        printf("%d ", c[i]);
    }
    
    return 0;
}
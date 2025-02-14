#include <stdio.h>

// A function to print the array
void Print(int A[], int N) {
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void Merge(int A[], int start, int mid, int end) {
    int i = start; // first part beginning
    int j = mid + 1; // second part beginning
    int B[end - start + 1];
    int k = 0;

    // merging the two parts
    while (i <= mid && j <= end) {
        if (A[i] < A[j]) {
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }
    // what if the elements still left in first part?
    while (i <= mid) B[k++] = A[i++];

    // Or what if the elements still left in second part?
    while (j <= end) B[k++] = A[j++];

    // copying the elements of B to A
    for (int i = start, k = 0; i <= end; i++) {
        A[i] = B[k++];
    }
}

void Merge_sort(int A[], int start, int end) {
    // Base case
    if (start >= end) return;
    int mid = (start + end) >> 1;

    // calling Merge_sort to sort first part
    Merge_sort(A, start, mid);

    // calling Merge_sort to sort second part
    Merge_sort(A, mid + 1, end);

    // calling Merge to merge the two parts which are sorted
    Merge(A, start, mid, end);
}

int main() {
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);
    // sending this array to Merge_sort function
    Merge_sort(A, 0, n - 1);
    // printing the sorted array
    Print(A, n);
    return 0;
}

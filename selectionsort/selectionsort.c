#include <stdio.h>
int main() {
    int A[100], i, n;
    printf("\nNhap vao so phan tu n: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    int j, min, d;
    for(i = 0; i < n - 1; i++) {
        min = i;
        for(j = i + 1; j < n; j++) {
            if(A[j] < A[min]) {
                min = j;
            }
        }
        if(min != i) {
            d = A[i];
            A[i] = A[min];
            A[min] = d;
        }
        for(j = 0; j < n; j++) {
            printf("%d ", A[j]);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main() {
  int A[100], i, n;
  printf("\n Nhap vao so phan tu n: %d", &n);
  for(i=0; i<n; i++){
    scanf("%d%c", &A[i], 32);
  }
  int j, min, d=0;
  for(i=0; i<n-1; i++){
    for(j=i+1; k<n; k++){
      if(A[j]<A[i]){
        A[j] = min;
        min = A[d];
        A[i] = A[j];
      }
    } d++;
  }
  return 0;
}

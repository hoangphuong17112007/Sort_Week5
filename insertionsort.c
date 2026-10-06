#include <stdio.h>
int main(){
    int A[100], n, i, j, min;
    printf("\nNhap vao so phan tu n: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    for(i=0; i<n; i++){
        if(i>0){
            min = A[i];
            for(j=i-1; j>=0; j--){
                if(min < A[j]){
                    A[j+1] = A[j];
                }
                else{
                    break;
                }
            }
            A[j+1] = min;
            for(int k=0; k<n; k++){
                printf("%d ", A[k]);
            }
            printf("\n");
        }
    }
    return 0;
}

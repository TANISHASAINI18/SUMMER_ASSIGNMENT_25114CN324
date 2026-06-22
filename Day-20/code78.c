#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter order of matrix (n x n): ");
    scanf("%d", &n);
    int A[n][n];
    printf("Enter elements of matrix:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(A[i][j] != A[j][i]) {
                printf("Matrix is NOT symmetric");
                return 0;
            }
        }
    }
    printf("Matrix is symmetric");
   return 0;
}
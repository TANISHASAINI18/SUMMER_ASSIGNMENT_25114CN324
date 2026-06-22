#include <stdio.h>
int main() {
    int r,c,i,j,sum;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int A[r][c];
    printf("Enter elements of matrix:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d", &A[i][j]);}
    }
    for(j=0;j<c;j++) {
        sum = 0; 
        for(i=0;i<r;i++) {
            sum += A[i][j];}
        printf("Sum of column %d = %d\n", j + 1, sum);
    }
   return 0;
}
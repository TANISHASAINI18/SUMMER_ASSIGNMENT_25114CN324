//code65
#include<stdio.h>
int main(){
    int arr1[50], arr2[50],merged[100];
    int size1,size2,i,k=0;
    printf("enteer size for first array(max 50):");
    scanf("%d", &size1);
    printf("enter elements:");
    for(i=0;i<size1;i++)
    scanf("%d", &arr1[i]);
    printf("enter size for second array(max 50):");
    scanf("%d", &size2);
    printf("enter elements:");
    for(i=0;i<size2;i++)
    scanf("%d", &arr2[i]);
    for(i=0;i<size1;i++) merged[k++]=arr1[i];
    for(i=0;i<size2;i++) merged[k++]=arr2[i];
    printf("merged array:");
    for(i=0;i<k;i++)
    printf("%d", merged[i]);
    return 0;
}
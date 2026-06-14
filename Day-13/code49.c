//code49
#include<stdio.h>
int main(){
    int size,i;
    printf("ennter the size of the array:");
    scanf("%d", &size);
    int arr[size];
    printf("enter %d elements :\n",size);
    for(i=0;i<size;i++){
        printf("elemennt %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n the elements in the array are: ");
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}
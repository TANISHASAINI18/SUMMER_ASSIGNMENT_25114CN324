//code50
#include<stdio.h>
int main(){
    int n,i;
    int sum=0;
    float average;
      printf("enter the numer of elemets:");
      scanf("%d", &n);
      int arr[n];
      printf("enter %d elements:\n",n);
      for(i=0;i<n;i++){
      scanf("%d", &arr[i]);
      }
      for(i=0;i<n;i++){
        sum+=arr[i];
      }
      average=(float)sum/n;
      printf("sum=%d\n",sum);
      printf("average=%.2f\n",average);
      return 0;
      
}
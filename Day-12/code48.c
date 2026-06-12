//code48
#include<stdio.h>
int isperfect(int num){
    int i,sum=0;{
for(i=1;i<num;i++)
if(num%i==0){
    sum=sum+i;
}
}
if(sum==num)
   return 1;
else
   return 0;
}
int main(){
    int number;
    printf("enter a number:");
    scanf("%d", &number);
    if(isperfect(number))
    printf("it is perfect number.\n");
    else
    printf("it is not a perfect number.\n");
    return 0;
}
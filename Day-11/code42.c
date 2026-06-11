//code42
#include<stdio.h>
int findmax(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}
int main(){
    int num1 ,num2 ,max;
    printf("enter two numbers:");
    scanf("%d %d", &num1,&num2);
    max=findmax(num1,num2);
    printf("maximum number=%d",max);
    return 0;
}
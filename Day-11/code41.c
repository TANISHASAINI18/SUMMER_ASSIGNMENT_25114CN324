//code41
#include<stdio.h>
int add(int a,int b){
    int sum;
    sum=a+b;
    return sum;
}
int main(){
    int num1 ,num2,result;
    printf("enter two numbers");
    scanf("%d %d", &num1 , &num2);
    result=add(num1,num2);
    printf("sum=%d",result);
    return 0;
}
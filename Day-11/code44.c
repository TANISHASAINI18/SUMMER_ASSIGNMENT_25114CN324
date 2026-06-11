//code44
#include<stdio.h>
int factorial(int n){
    int i,fact =1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int num,result;
    printf("enter a number:");
    scanf("%d", &num);
    result=factorial(num);
    printf("factorial=%d",result);
    return 0;

}

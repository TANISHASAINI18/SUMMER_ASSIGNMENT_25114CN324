//code47
#include<stdio.h>
int fibonacci(int n){
    int a=0,b=1,next=1,i;
    printf("fibonacci series");
    for(i=1;i<=n;i++){
        printf("%d",a);
        next=a+b;
        a=b;
        b=next;
    }
}
int main(){
    int n;
    printf("enter number of terms:");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

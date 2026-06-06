#include<stdio.h>
int main(){
    int n,r,i=1,dnum;
    long bin=0;
    printf("Enter a decimal number");
    scanf("%d", &n);
    dnum=n;
    while(n!=0)
    {
    r=n%2;
    n=n/2;
    bin=bin+r*i;
    i=i*10;
    }
    printf("%d=%d",dnum,bin);
    return 0;
}
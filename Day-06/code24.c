 #include<stdio.h>
int main(){
    int base, exponent ,i;
    long long p=1 ;
    printf("Enter base ");
    scanf("%d",&base);
    printf("Enter exponent");
    scanf("%d",&exponent);
    for(i=1 ; i<=exponent;i++){
       p=p*base;
    }
    printf("%d^%d=%11d",base,exponent,p);
    return 0;
}
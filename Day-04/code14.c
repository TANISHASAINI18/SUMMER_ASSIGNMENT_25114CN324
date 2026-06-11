#include<stdio.h>
int main(){
  int n , a=0 , b=1 , c;
printf("Enter the value of : ");
scanf("%d", &n);
if(n==0)
   printf("Nth fibonacci term is : %d", a);
else if(n==1)
    printf("Nth fibonacci term is : %d", b);
else{
     for(int i = 2; i<= n ; i++){
        c=a+b;
        a=b;
        b=c;
     }
     printf("Nth fibonacci term is :%d",c);
  }
  return 0;
}
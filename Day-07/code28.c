//code28
#include<stdio.h>
int rev = 0;
int reverse(int n);
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    reverse(num);
    printf("Reverse number = %d", rev);
}
int reverse(int n)
{
    if(n == 0)
        return 0;
    else
    {
        rev = rev * 10 + n % 10;
        reverse(n / 10);
    }
}
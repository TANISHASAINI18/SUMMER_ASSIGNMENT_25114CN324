//code45
#include<stdio.h>
int isPalindrome(int num) {
    int original = num;
    int reversed = 0, remainder;
 while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }if (original == reversed)
        return 1;
    else
        return 0;  
}
int main() {
    int number;
    printf("enter a number:");
    scanf("%d", &number);
    if(isPalindrome(number))
    printf("it is a palindrome number.\n");
    else
    ("it is not palindrome number.\n");
    return 0;
}
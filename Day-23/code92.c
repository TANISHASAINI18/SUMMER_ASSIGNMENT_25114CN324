#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i,j,count,max=0;
    char maxChar;
    printf("Enter a string: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++) {
        count=0;
        for(j=0;str[j]!='\0';j++) {
            if(str[i]==str[j]) {
                count++; }
        }
        if(count>max) {
            max=count;
            maxChar=str[i];  }
    }
    printf("Maximum occurring character is: %c", maxChar);
    printf("\nIt appears %d times.", max);
    return 0;
}
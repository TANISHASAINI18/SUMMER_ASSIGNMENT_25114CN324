#include <stdio.h>
int main() {
    char str[100];
    int i,j,isDuplicate;
    printf("Enter a string: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++) {
        isDuplicate=0;
        for(j=0;j<i;j++) {
            if(str[i]==str[j]) {
                isDuplicate=1;
                break; }
        }
        if(isDuplicate==0) {
            printf("%c", str[i]);
        }
    }
    return 0;
}
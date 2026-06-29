#include <stdio.h>
#include <string.h>
int main() {
    char str[100],rev[100];
    int choice,len,i;
    while (1) {
        printf("\n-String Operations-\n");
        printf("1. Input String\n2. Length\n3. Reverse\n4. Palindrome Check\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter string: ");
                scanf(" %[^\n]",str);
                break;
            case 2:
                len=strlen(str);
                printf("Length=%d\n", len);
                break;
            case 3:
                len = strlen(str);
                for (i=0;i<len;i++) {
                    rev[i]=str[len-i-1];
                }
                rev[len]='\0';
                printf("Reversed string=%s\n", rev);
                break;
            case 4:
                len=strlen(str);
                for (i=0;i<len;i++) {
                    rev[i]=str[len-i-1];}
                rev[len]='\0';
                if (strcmp(str, rev)==0)
                    printf("Palindrome\n");
                else
                    printf("Not Palindrome\n");
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice!\n");}
    }
    return 0;
}
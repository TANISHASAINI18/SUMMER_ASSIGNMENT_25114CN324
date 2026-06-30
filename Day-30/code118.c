#include <stdio.h>
int main() {
    int i,n;
    char bookName[10][50];
    char author[10][50];
    printf("Enter number of books (max 10): ");
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        printf("\nBook %d\n",i+1);
        printf("Enter Book Name: ");
        scanf("%s",bookName[i]);   
        printf("Enter Author Name: ");
        scanf("%s",author[i]);}
    printf("\nLibrary Books\n");
    for(i=0;i<n;i++) {
        printf("\nBook %d\n",i+1);
        printf("Book Name: %s\n",bookName[i]);
        printf("Author: %s\n",author[i]);}
    return 0;
}
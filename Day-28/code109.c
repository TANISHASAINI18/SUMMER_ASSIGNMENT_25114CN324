#include <stdio.h>
#include <string.h>
struct Book {
    int id;
    char name[50];
    char author[50];
    int issued; 
};
struct Book lib[100];
int count=0;
void addBook() {
    printf("Enter Book ID: ");
    scanf("%d", &lib[count].id);
    printf("Enter Book Name: ");
    scanf(" %[^\n]", lib[count].name);
    printf("Enter Author Name: ");
    scanf(" %[^\n]", lib[count].author);
    lib[count].issued=0;
    count++;
    printf("Book Added Successfully!\n");}
void displayBooks() {
    if (count==0) {
        printf("No books available.\n");
        return; }
    for (int i = 0; i < count; i++) {
        printf("\nID: %d", lib[i].id);
        printf("\nName: %s", lib[i].name);
        printf("\nAuthor: %s", lib[i].author);
        printf("\nStatus: %s\n", lib[i].issued ? "Issued" : "Available");
    }
}
void searchBook() {
    int id, found=0;
    printf("Enter Book ID to search: ");
    scanf("%d", &id);
    for (int i=0;i<count;i++) {
        if (lib[i].id==id) {
            printf("Book Found:\n");
            printf("Name: %s\n", lib[i].name);
            printf("Author: %s\n", lib[i].author);
            found=1;
            break;
        }
    }
    if (!found) {
        printf("Book not found.\n");
    }
}
void issueBook() {
    int id;
    printf("Enter Book ID to issue: ");
    scanf("%d", &id);
    for (int i=0;i<count;i++) {
        if (lib[i].id==id) {
            if (lib[i].issued==0) {
                lib[i].issued=1;
                printf("Book Issued Successfully!\n");
            } else {
                printf("Book already issued.\n");
            }
            return;
        }
    }
    printf("Book not found.\n");
}
void returnBook() {
    int id;
    printf("Enter Book ID to return: ");
    scanf("%d", &id);
    for (int i=0;i<count;i++) {
        if (lib[i].id==id) {
            if (lib[i].issued==1) {
                lib[i].issued=0;
                printf("Book Returned Successfully!\n");
            } else {
                printf("Book was not issued.\n");
            }
            return;
        }
    }
    printf("Book not found.\n");
}int main() {
    int choice;
    while (1) {
        printf("\n--- Library Management System ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: issueBook(); break;
            case 5: returnBook(); break;
            case 6: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}
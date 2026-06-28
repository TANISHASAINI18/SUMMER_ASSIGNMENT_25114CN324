#include <stdio.h>
int main() {
    char name[5][50];
    char phone[5][15];
    int count=0, choice;
    while (1) {
        printf("\n1. Add Contact\n2. Show Contacts\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice==1) {
            if (count<5) {
                printf("Enter Name: ");
                scanf(" %[^\n]", name[count]);
                printf("Enter Phone: ");
                scanf("%s", phone[count]);
                count++;
                printf("Contact Added!\n");
            } else {
                printf("Contact list full!\n");
            }
        }
        else if (choice==2) {
            for (int i = 0; i < count; i++) {
                printf("\nName: %s", name[i]);
                printf("\nPhone: %s\n", phone[i]);
            }
        }
        else if (choice==3) {
            break;
        }
        else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}
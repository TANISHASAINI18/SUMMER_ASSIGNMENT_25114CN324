#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    struct Student s[100];
    int i,n=0,choice;
    do {
        printf("\n--- STUDENT MENU ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter Roll No: ");
                scanf("%d", &s[n].roll);
                printf("Enter Name: ");
                scanf("%s", s[n].name);
                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);
                n++;
                printf("Student added successfully!\n");
                break;
            case 2:
                if(n==0) {
                    printf("No records found!\n");
                } else {
                    printf("\n--- Student Records ---\n");
                    for(i=0;i<n;i++) {
                        printf("Roll: %d\n", s[i].roll);
                        printf("Name: %s\n", s[i].name);
                        printf("Marks: %.2f\n\n", s[i].marks);
                    }
                }
                break;
            case 3:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice!=3);
    return 0;
}
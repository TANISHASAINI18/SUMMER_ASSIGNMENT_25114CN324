#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee emp[100];
    int n=0,choice,i;
    do {
        printf("\n--- EMPLOYEE MENU ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &emp[n].id);
                printf("Enter Name: ");
                scanf("%s", emp[n].name);
                printf("Enter Salary: ");
                scanf("%f", &emp[n].salary);
                n++;
                printf("Employee added successfully!\n");
                break;
            case 2:
                if(n==0) {
                    printf("No records found!\n");
                } else {
                    printf("\n--- Employee Records ---\n");
                    for(i=0;i<n;i++) {
                        printf("ID: %d\n", emp[i].id);
                        printf("Name: %s\n", emp[i].name);
                        printf("Salary: %.2f\n\n", emp[i].salary);
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
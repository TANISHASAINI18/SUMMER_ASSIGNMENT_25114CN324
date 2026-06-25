#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float basic, hra, da, net;
};
int main() {
    struct Employee emp[100];
    int n = 0, choice, i;
    do {
        printf("\n--- SALARY MENU ---\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display Records\n");
        printf("3. Calculate Net Salary\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &emp[n].id);
                printf("Enter Name: ");
                scanf("%s", emp[n].name);
                printf("Enter Basic Salary: ");
                scanf("%f", &emp[n].basic);
                printf("Enter HRA: ");
                scanf("%f", &emp[n].hra);
                printf("Enter DA: ");
                scanf("%f", &emp[n].da);
                emp[n].net = 0; 
                n++;
                printf("Employee salary added!\n");
                break;
            case 2:
                if(n == 0) {
                    printf("No records found!\n");
                } else {
                    printf("\n--- Salary Records ---\n");
                    for(i = 0; i < n; i++) {
                        printf("ID: %d\n", emp[i].id);
                        printf("Name: %s\n", emp[i].name);
                        printf("Basic: %.2f\n", emp[i].basic);
                        printf("HRA: %.2f\n", emp[i].hra);
                        printf("DA: %.2f\n", emp[i].da);
                        printf("Net: %.2f\n\n", emp[i].net);
                    }
                }
                break;
            case 3:
                if(n == 0) {
                    printf("No employees to calculate!\n");
                } else {
                    for(i = 0; i < n; i++) {
                        emp[i].net = emp[i].basic + emp[i].hra + emp[i].da;
                    }
                    printf("Net salary calculated for all employees!\n");
                }
                break;
            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);
    return 0;
}
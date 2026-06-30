#include <stdio.h>
int main() {
    int i,n;
    int empId[10];
    char name[10][50];
    float salary[10];
    printf("Enter number of employees (max 10): ");
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        printf("\nEmployee %d\n",i+1);
        printf("Enter ID: ");
        scanf("%d",&empId[i]);
        printf("Enter Name: ");
        scanf("%s",name[i]);   
        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }
    printf("\nEmployee Records\n");
    for(i=0;i<n;i++) {
        printf("\nEmployee %d\n",i+1);
        printf("ID: %d\n",empId[i]);
        printf("Name: %s\n",name[i]);
        printf("Salary: %.2f\n",salary[i]);
    }
    return 0;
}
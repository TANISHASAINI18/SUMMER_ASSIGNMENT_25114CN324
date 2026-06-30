#include <stdio.h>
int main() {
    int roll[5], i;
    char name[5][20];
    float marks[5];
    printf("Enter details of 5 students:\n");
    for(i=0;i<5;i++) {
        printf("\nStudent %d\n",i+1);
        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);
        printf("Enter Name: ");
        scanf("%s", name[i]);
        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }
    printf("\n-Student Records-\n");
    for(i=0;i<5;i++) {
        printf("\nStudent %d\n",i+1);
        printf("Roll Number: %d\n",roll[i]);
        printf("Name: %s\n",name[i]);
        printf("Marks: %.2f\n",marks[i]);
    }
    return 0;
}
#include <stdio.h>
#define MAX 10
void addStudent(int roll[],char name[][20],float marks[],int n) {
    int i;
    for(i=0;i<n;i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d",&roll[i]);
        printf("Enter Name: ");
        scanf("%s",name[i]);
        printf("Enter Marks: ");
        scanf("%f",&marks[i]);}
}
void displayStudent(int roll[],char name[][20],float marks[],int n) {
    int i;
    printf("\nStudent Record\n");
    for(i=0;i<n;i++) {
        printf("\nRoll: %d\n",roll[i]);
        printf("Name: %s\n",name[i]);
        printf("Marks: %.2f\n",marks[i]); }
}
void searchStudent(int roll[],char name[][20],float marks[],int n) {
    int i,key,found=0;
    printf("Enter Roll Number to search: ");
    scanf("%d", &key);
    for(i=0;i<n;i++) {
        if(roll[i]==key) {
            printf("\nStudent Found!\n");
            printf("Roll: %d\n",roll[i]);
            printf("Name: %s\n",name[i]);
            printf("Marks: %.2f\n",marks[i]);
            found=1;
            break;
        }
    }
    if(found==0) {
        printf("Student not found!\n");
    }
}
int main() {
    int roll[MAX],n,choice;
    char name[MAX][20];
    float marks[MAX];
    printf("Enter number of students: ");
    scanf("%d", &n);
    while(1) {
        printf("\nMENU\n");
        printf("1.Add Students\n");
        printf("2.Display Students\n");
        printf("3.Search Student\n");
        printf("4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                addStudent(roll,name,marks,n);
                break;
            case 2:
                displayStudent(roll,name,marks,n);
                break;
            case 3:
                searchStudent(roll,name,marks,n);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
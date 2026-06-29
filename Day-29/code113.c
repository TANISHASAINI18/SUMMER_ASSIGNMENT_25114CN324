#include <stdio.h>
int main() {
    int choice;
    float a, b;
    while (1) {
        printf("\n--Calculator--\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice==5) {
            break;}
        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);
        switch (choice) {
            case 1:
                printf("Result=%.2f\n",a+b);
                break;
            case 2:
                printf("Result=%.2f\n",a-b);
                break;
            case 3:
                printf("Result=%.2f\n",a*b);
                break;
            case 4:
                if (b!=0)
                    printf("Result=%.2f\n",a/b);
                else
                    printf("Cannot divide by zero!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
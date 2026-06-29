#include <stdio.h>
int main() {
    int arr[50],n=0,choice,i,sum,max;
    while (1) {
        printf("\n--Array Operations--\n");
        printf("1. Input Array\n2. Display Array\n3. Find Sum\n4. Find Maximum\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &n);
                printf("Enter elements:\n");
                for (i=0;i<n;i++) {
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                printf("Array elements:\n");
                for (i=0;i<n;i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 3:
                sum=0;
                for (i=0;i<n;i++) {
                    sum+=arr[i];
                }
                printf("Sum=%d\n", sum);
                break;
            case 4:
                if (n==0) {
                    printf("Array is empty!\n");
                    break;
                }
                max=arr[0];
                for (i=1;i<n;i++) {
                    if (arr[i]>max) {
                        max=arr[i];
                    }
                }
                printf("Maximum=%d\n", max);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
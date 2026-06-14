//code61
#include <stdio.h>
int main() {
    int arr[100], n, i;
    int total_sum, array_sum = 0, missing;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n-1);
    for(i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
        array_sum += arr[i];
    }
    total_sum = n * (n + 1) / 2;
    missing = total_sum - array_sum;
    printf("Missing number is: %d", missing);
    return 0;
}
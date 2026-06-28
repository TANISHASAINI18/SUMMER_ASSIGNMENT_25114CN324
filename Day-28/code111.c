#include <stdio.h>
int main() {
    int totalSeats=5,choice, booked=0;
    while (1) {
        printf("\n1. Book Ticket\n2. Show Available Seats\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice==1) {
            if (booked<totalSeats) {
                booked++;
                printf("Ticket Booked! Seat No: %d\n", booked);
            } else {
                printf("No seats available!\n");
            }
        }
        else if (choice==2) {
            printf("Available Seats: %d\n", totalSeats - booked);
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
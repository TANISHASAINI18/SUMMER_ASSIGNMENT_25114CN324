#include <stdio.h>
#include <string.h>
struct Account {
    int accNo;
    char name[50];
    float balance;
};
struct Account bank[100];
int count=0;
void createAccount() {
    printf("Enter Account Number: ");
    scanf("%d", &bank[count].accNo);
    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", bank[count].name);
    bank[count].balance=0;
    count++;
    printf("Account Created Successfully!\n");}
void displayAccounts() {
    if (count==0) {
        printf("No accounts found.\n");
        return;}
    for (int i=0;i<count;i++) {
        printf("\nAccount No: %d",bank[i].accNo);
        printf("\nName: %s",bank[i].name);
        printf("\nBalance: %.2f\n",bank[i].balance);
    }
}
void searchAccount() {
    int accNo,found=0;
    printf("Enter Account Number: ");
    scanf("%d", &accNo);
    for (int i=0;i<count;i++) {
        if (bank[i].accNo==accNo) {
            printf("Account Found:\n");
            printf("Name: %s\n",bank[i].name);
            printf("Balance: %.2f\n",bank[i].balance);
            found=1;
            break;}
    }
    if (!found) {
        printf("Account not found.\n");
    }
}
void deposit() {
    int accNo;
    float amount;
    printf("Enter Account Number: ");
    scanf("%d", &accNo);
    printf("Enter Amount to Deposit: ");
    scanf("%f",&amount);
    for (int i=0;i<count;i++) {
        if (bank[i].accNo==accNo) {
            bank[i].balance+=amount;
            printf("Amount Deposited Successfully!\n");
            return;
        }
    }

    printf("Account not found.\n");
}
void withdraw() {
    int accNo;
    float amount;
    printf("Enter Account Number: ");
    scanf("%d", &accNo);
    printf("Enter Amount to Withdraw: ");
    scanf("%f", &amount);
    for (int i=0;i<count;i++) {
        if (bank[i].accNo == accNo) {
            if (bank[i].balance>=amount) {
                bank[i].balance-=amount;
                printf("Withdrawal Successful!\n");
            } else {
                printf("Insufficient Balance!\n");
            }
            return;
        }
    }
    printf("Account not found.\n");
}
int main() {
    int choice;
    while (1) {
        printf("\n--- Bank Management System ---\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Search Account\n");
        printf("4. Deposit\n");
        printf("5. Withdraw\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: createAccount(); break;
            case 2: displayAccounts(); break;
            case 3: searchAccount(); break;
            case 4: deposit(); break;
            case 5: withdraw(); break;
            case 6: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}
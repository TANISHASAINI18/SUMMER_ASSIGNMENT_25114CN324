#include <stdio.h>
#include <string.h>
struct Item {
    int id;
    char name[50];
    int quantity;
};
struct Item inv[100];
int count=0;
void addItem() {
    printf("Enter Item ID: ");
    scanf("%d", &inv[count].id);
    printf("Enter Item Name: ");
    scanf(" %[^\n]", inv[count].name);
    printf("Enter Quantity: ");
    scanf("%d", &inv[count].quantity);
    count++;
    printf("Item Added!\n");
}
void displayItems() {
    if (count==0) {
        printf("No items available.\n");
        return;
    }
    for (int i=0;i<count;i++) {
        printf("\nID: %d", inv[i].id);
        printf("\nName: %s", inv[i].name);
        printf("\nQuantity: %d\n", inv[i].quantity);
    }
}
void searchItem() {
    int id, found=0;
    printf("Enter Item ID: ");
    scanf("%d", &id);
    for (int i=0;i<count;i++) {
        if (inv[i].id==id) {
            printf("Item Found:\n");
            printf("Name: %s\n",inv[i].name);
            printf("Quantity: %d\n",inv[i].quantity);
            found=1;
            break;}
    }
    if (!found) {
        printf("Item not found.\n");
    }
}
void updateItem() {
    int id, qty;
    printf("Enter Item ID: ");
    scanf("%d", &id);
    for (int i=0;i<count;i++) {
        if (inv[i].id==id) {
            printf("Enter New Quantity: ");
            scanf("%d", &qty);
            inv[i].quantity=qty;
            printf("Quantity Updated!\n");
            return; }
    }
    printf("Item not found.\n");
}
int main() {
    int choice;
    while (1) {
        printf("\n-Inventory System-\n");
        printf("1. Add Item\n2. Display Items\n3. Search Item\n4. Update Quantity\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addItem(); break;
            case 2: displayItems(); break;
            case 3: searchItem(); break;
            case 4: updateItem(); break;
            case 5: return 0;
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}
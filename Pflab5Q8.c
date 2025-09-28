#include <stdio.h>

int main() {
    int section, qty;
    char size, type;

    printf("Choose a section:\n");
    printf("1. Coffee Shop\n");
    printf("2. Burger Hub\n");
    printf("3. Ice Cream Parlour\n");
    printf("Enter choice: ");
    scanf("%d", &section);

    if (section == 2) {
        printf("Your order will be handled by Burger Hub.\n");
    } 
    else if (section == 3) {
        printf("Your order will be handled by Ice Cream Parlour.\n");
    } 
    else if (section == 1) {
        int price = 0;

        printf("Choose size (S=Small, M=Medium, L=Large): ");
        scanf(" %c", &size);

        if (size == 'S' || size == 's') price = 120;
        else if (size == 'M' || size == 'm') price = 160;
        else if (size == 'L' || size == 'l') price = 200;
        else {
            printf("Invalid size.\n");
            return 0;
        }

        // Quantity
        printf("How many coffees? ");
        scanf("%d", &qty);

        if (qty > 1) {
            printf("Check our combo offers!\n");
        }

        // Coffee type
        printf("Choose type (R=Regular, C=Cappuccino, L=Latte): ");
        scanf(" %c", &type);

        // Bill
        int total = price * qty;
        printf("Final Bill = %d\n", total);
    } 
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}

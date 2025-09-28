#include <stdio.h>

int main() {
    int pin, enteredPin;
    int balance = 5000;   
    int amount;

    pin = 1223; 

   
    printf("Enter 4-digit PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin == pin) {
    
        printf("Enter withdrawal amount: ");
        scanf("%d", &amount);

        if (amount > balance) {
            printf("Insufficient Balance.\n");
        } else {
            balance -= amount;
            printf("Withdrawal successful!\n");
            printf("Remaining Balance: %d\n", balance);
        }
    } else {
        printf("Incorrect PIN.\n");
    }

    return 0;
}

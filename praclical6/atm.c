#include <stdio.h>
int main() {
    //Anshika Gupta
    //ERP 10238
   int correctPin = 4321;
    int enteredPin;
    int count = 0;

    do {
        printf("Enter ATM PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == correctPin) {
            printf("PIN Verified Successfully.\n");
            printf("Welcome to ATM.\n");
            break;
        } else {
            count++;
            printf("Incorrect PIN.\n");
        }

    } while (count < 3);

    if (count == 3) {
        printf("Card Blocked. Too many wrong attempts.\n");
    }

    return 0;
}

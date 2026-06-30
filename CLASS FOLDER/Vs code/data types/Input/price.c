#include <stdio.h>

int main() {
    float amount;
    int choice;
    const float rate = 94.25f; 

    printf("Choose conversion:\n");
    printf("1. Rupees to Dollars\n");
    printf("2. Dollars to Rupees\n");
    printf("Enter choice (1 or 2): ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (choice == 1) {
        printf("Enter amount in Rupees: ");
        scanf("%f", &amount);
        printf("Amount in Dollars: %.2f\n", amount / rate);
    } else if (choice == 2) {
        printf("Enter amount in Dollars: ");
        scanf("%f", &amount);
        printf("Amount in Rupees: %.2f\n", amount * rate);
    } else {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int customerID;
    char customerName[100];
    int unitsConsumed;
    double chargesPerUnit = 0.0;
    double totalBill = 0.0;
    double surcharge = 0.0;
    double totalAmount = 0.0;

    printf("Enter Customer ID:");
    scanf("%d",& customerID);
    printf("Ënter customerName:");
    scanf("%s",& customerName);
    printf("Enter unitsConsumed:");
    scanf("%d",& unitsConsumed);

    // charges per unit based on the units consumed
    if (unitsConsumed <= 199) {
        chargesPerUnit = 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        chargesPerUnit = 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        chargesPerUnit = 1.80;
    } else if (unitsConsumed >= 600) {
        chargesPerUnit = 2.00;
    }

    // Calculate the total bill
    totalBill = unitsConsumed * chargesPerUnit;

    // Apply surcharge if the bill exceeds 400
    if (totalBill > 400) {
        surcharge = 0.15 * totalBill;
    }

    // Calculate the total amount to pay
    totalAmount = totalBill + surcharge;

    // Ensure the minimum bill is 100
    if (totalAmount < 100) {
        totalAmount = 100;
    }

    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charges per Unit: %.2f\n", chargesPerUnit);
    printf("Total Amount to Pay: %.2f\n", totalAmount);

    return 0;
}

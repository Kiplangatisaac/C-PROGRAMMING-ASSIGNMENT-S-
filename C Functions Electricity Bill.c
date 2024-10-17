//C functions
#include <stdio.h>

void getCustomerDetails(int *customerID, char customerName[], int *unitsConsumed) {
    printf("Enter customerID:");
    scanf("%d",& customerID);
    printf("Enter customerName:");
    scanf("%s",& customerName);
    printf("Enter unitsConsumed:");
    scanf("%d",& unitsConsumed);
}
float calculateChargePerUnit(int units) {
    if (units <= 199) {
        return 1.20;
    } else if (units >= 200 && units < 400) {
        return 1.50;
    } else if (units >= 400 && units < 600) {
        return 1.80;
    } else {
        return 2.00;
    }
}
float calculateTotalBill(int units, float chargePerUnit) {
    return units * chargePerUnit;
}

float applySurcharge(float totalBill) {
    if (totalBill > 400) {
        return 0.15 * totalBill;
    } else {
        return 0.0;
    }
}
void displayBillDetails(int customerID, char customerName[], int units, float chargePerUnit, float netAmount) {
    printf("customerID: %d\n", customerID);
    printf("customerName: %s\n", customerName);
    printf("unitsConsumed: %d\n", units);
    printf("Charges per Unit: %.2f\n", chargePerUnit);
    printf("Total Amount to Pay: %.2f\n", netAmount);
}
int main() {
    int customerID, unitsConsumed;
    char customerName[50];
    float chargePerUnit, totalBill, surcharge, netAmount;

    getCustomerDetails(&customerID, customerName, &unitsConsumed);
    chargePerUnit = calculateChargePerUnit(unitsConsumed);
    totalBill = calculateTotalBill(unitsConsumed, chargePerUnit);
    surcharge = applySurcharge(totalBill);
    netAmount = totalBill + surcharge;

    if (netAmount < 100) {
        netAmount = 100;
    }
    displayBillDetails(customerID, customerName, unitsConsumed, chargePerUnit, netAmount);

    return 0;
}

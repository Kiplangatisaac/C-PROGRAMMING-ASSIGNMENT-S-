{
    int customerDetails[3];
    // Array to store CustomerID, UnitsConsumed, and ChargePerUnit
    char customerName[50];
    float totalBill, surcharge = 0.0, netAmount;
    
    printf("Enter Customer ID:");
    scanf("%d",& customerDetails[0]);  
    // Store CustomerID in the array
    printf("Enter Customer Name:\n");
    scanf("%s",& customerName);
    printf("Enter Units Consumed:");
    scanf("%d",& customerDetails[1]);
    // Store UnitsConsumed in the array

    // Calculate charge per unit based on the conditions and store it in the array
    if (customerDetails[1] <= 199) {
        customerDetails[2] = 120;
        // Store ChargePerUnit in cents
    } else if (customerDetails[1] >= 200 && customerDetails[1] < 400) {
        customerDetails[2] = 150; 
        // Store ChargePerUnit in cents
    } else if (customerDetails[1] >= 400 && customerDetails[1] < 600) {
        customerDetails[2] = 180;  
        // Store ChargePerUnit in cents
    } else {
        customerDetails[2] = 200; 
        // Store ChargePerUnit in cents
    }
    // Calculate the total bill in cents
    totalBill = customerDetails[1] * customerDetails[2];

    if (totalBill > 40000) {
        surcharge = 0.15 * totalBill;
    }
    // Calculate the net amount to pay in cents
    netAmount = totalBill + surcharge;

    if (netAmount < 10000) {
        netAmount = 10000;
    }
    printf("Customer ID: %d\n", customerDetails[0]);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", customerDetails[1]);
    printf("Charges per Unit: %.2f\n", customerDetails[2] / 100.0);
    // Convert cents back to Kshs
    printf("Total Amount to Pay: %.2f\n", netAmount / 100.0); 
    // Convert cents back to Kshs

    return 0;
}
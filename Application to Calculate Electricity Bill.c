// Application to Calculate Electricity Bill
/*
This application prompts the user to enter customer ID, customer name, and unit consumed.
It then calculates the electricity bill based on the units consumed, applying different rates 
and surcharges if necessary.

Author: Loren Bruse Ochieng
Reg no: CT101/G/21905/24
Date: 24/09/2024
*/

// Preprocessor for scanf() and printf()
#include <stdio.h>

int main() {
    int customerID, unitConsumed;
    char customerName[50];
    float chargesPerUnit, totalBill, surcharge = 0;

    // Prompt user for customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    
    printf("Enter Unit Consumed: ");
    scanf("%d", &unitConsumed);

    // Calculate charges per unit based on unit consumed
    if (unitConsumed <= 199) {
        chargesPerUnit = 1.20;
    } else if (unitConsumed >= 200 && unitConsumed < 400) {
        chargesPerUnit = 1.50;
    } else if (unitConsumed >= 400 && unitConsumed < 600) {
        chargesPerUnit = 1.80;
    } else {
        chargesPerUnit = 2.00;
    }

    // Total bill calculation
    totalBill = unitConsumed * chargesPerUnit;

    // Extracharge if bill exceeds Kshs 400
    if (totalBill > 400) {
        surcharge = totalBill * 0.15;  // 15% surcharge
        totalBill += surcharge;
    }

    // Minimum bill is Kshs 100
    if (totalBill < 100) {
        totalBill = 100;
    }

    // Display the bill details
    printf("\nElectricity Bill\n");
    printf("----------------------------\n");
    printf("Customer ID     : %d\n", customerID);
    printf("Customer Name   : %s\n", customerName);
    printf("Unit Consumed   : %d\n", unitConsumed);
    printf("Charges per Unit: Ksh %.2f\n", chargesPerUnit);
    printf("Total Amount to Pay: Ksh %.2f\n", totalBill);
    
    return 0;
}

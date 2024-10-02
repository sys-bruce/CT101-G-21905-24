//program to calculate_compound interest_interest
/*
program accepting the principle amount,time and rate values
Author:Loren Bruse 0chieng
Reg no:CT101/G/21905/24
Date:24/09/2024
*/
//Preprocessor scanf(),printf()
#include <stdio.h>
#include <math.h>

// Function to calculate compound interest
double calculate_compound_interest(double principal, double rate, int n, double time) {
    // A = P * (1 + r/n)^(n*t)
    double amount = principal * pow((1 + rate / n), n * time);
    return amount;
}

int main() {
    double principal, rate, time, final_amount;
    int n;

    // Accepting inputs from the user
    printf("Enter the principal amount : ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate  (in %%): ");
    scanf("%lf", &rate);
    rate /= 100;  // Convert percentage to decimal

    printf("Enter the time in years : ");
    scanf("%lf", &time);

    printf("Enter the number of times to be compunded : ");
    scanf("%d", &n);

    // Calculating the final amount after compound interest
    final_amount = calculate_compound_interest(principal, rate, n, time);

    // Outputting the results
    printf("Final Amount after %.2f years: %.5f\n", time, final_amount);
    printf("Compound Interest: %.2f\n", final_amount - principal);

    return 0;
}
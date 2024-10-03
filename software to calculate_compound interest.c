//software to calculate_compound interest_interest
/*
software accepting the precept quantity,time and price values
Author:Loren Bruse 0chieng
Reg no:CT101/G/21905/24
Date:24/09/2024
*/
//Preprocessor scanf(),printf()
#include <stdio.h>
#include <math.h>

// Function to calculate compound hobby
double calculate_compound_interest(double principal, double rate, int n, double time) {
    // A = P * (1 + r/n)^(n*t)
    double amount = principal * pow((1 + rate / n), n * time);
    return amount;
}

int main() {
    double main, price, time, final_amount;
    int n;

    // Accepting inputs from the user
    printf("Enter the main quantity : ");
    scanf("%lf", &main);

    printf("Enter the yearly hobby price  (in %%): ");
    scanf("%lf", &price);
    price /= 100;  // Convert percent to decimal

    printf("Enter the time in years : ");
    scanf("%lf", &time);

    printf("Enter the range of instances to be compunded : ");
    scanf("%d", &n);

    // Calculating the very last quantity after compound hobby
    final_amount = calculate_compound_interest(main, price, n, time);

    // Outputting the results
    printf("Final Amount after %.2f years: %.5fn", time, final_amount);
    printf("Compound Interest: %.2fn", final_amount - main);

    return 0;
}
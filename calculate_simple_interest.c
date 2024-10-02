//program to calculate_simple_interest
/*
program to accept the principle amount,time and rate values
Author:Loren Bruse 0chieng
Reg no:CT101/G/21905/24
Date:24/09/2024
*/
//Preprocessor scanf(),printf()
#include <stdio.h>

// Function to calculate simple interest
float calculate_simple_interest(float principal, float time, float rate) {
    return (principal * time * rate) / 100;
}

int main() {
    float principal, time, rate, simple_interest;

    // Accept input from the user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    // Calculate simple interest
    simple_interest = calculate_simple_interest(principal, time, rate);

    // Display the result
    printf("The simple interest is: %.4f\n", simple_interest);

    return 0;
}

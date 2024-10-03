//C program to implement the loan requirements
/*
Author:Loren Bruse 0chieng
Reg no:CT101/G/21905/24
Date:24/09/2024
*/
//Preprocessor scanf(),printf()
#include <stdio.h>

int main() {
    int age;
    double income;

    // User-friendly prompts for age and income input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income (in shillings): ");
    scanf("%lf", &income);

    // Check if the customer qualifies for the loan
    if (age >= 21 && income >= 21000) {
        printf("Congratulations! You qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
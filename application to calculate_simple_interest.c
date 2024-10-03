//application to calculate_simple_interest
/*
application to just accept the precept amount,time and price values
Author:Loren Bruse 0chieng
Reg no:CT101/G/21905/24
Date:24/09/2024
*/
//Preprocessor scanf(),printf()
#include <stdio.h>

// Function to calculate easy hobby
float calculate_simple_interest(float main, float time, float price) {return (main * time * price) / 100;
}

int main() {
    float main, time, price, simple_interest;

    // Accept enter from the user
    printf("Enter the main amount: ");
    scanf("%f", &main);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    printf("Enter the price of interest: ");
    scanf("%f", &price);

    // Calculate easy hobby
    simple_interest = calculate_simple_interest(main, time, price);

    // Display the result
    printf("The easy simple interest is: %.4fn", simple_interest);

    return 0;
}
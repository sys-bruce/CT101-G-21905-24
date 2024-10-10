// Application for While loop
/*
This application prompts the user to enter starting and stopping values 
and then prints all numbers in that range using a while loop.
Author: Loren Bruse Ochieng
Reg no: CT101/G/21905/24
Date: 24/09/2024
*/

// Preprocessor for scanf() and printf()
#include <stdio.h>

int main() {
    int start, stop;

    // Prompt user for starting and stopping values
    printf("Enter the starting value: ");
    scanf("%d\n", &start);
    printf("Enter the stopping value: ");
    scanf("%d\n", &stop);

    // Ensure the starting value is less than or equal to the stopping value
    if (start > stop) {
        printf("Starting value must be less than or equal to stopping value.\n");
        return 1;  
    }

    // While loop to print numbers from start to stop
    printf("Numbers from %d to %d:\n", start, stop);
    int i = start;  
    while (i <= stop) {
        printf("%d\n ", i);
        i++;  
    }

    return 0;
}

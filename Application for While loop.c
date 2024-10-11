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
    scanf("%d", &start);
    printf("Enter the stopping value: ");
    scanf("%d", &stop);

    // While loop to print numbers from start to stop
    printf("Numbers from %d to %d:\n", start, stop);
    int i = start; 
    while (i <= stop) {
        printf("%d ", i);
        i++; 
    }

    return 0;
}
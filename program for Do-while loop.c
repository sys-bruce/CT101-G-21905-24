//program for Do-while loop
/*
application to just accept the precept amount,time and price values
Author:Loren Bruse 0chieng
Reg no:CT101/G/21905/24
Date:24/09/2024
*/
//Preprocessor scanf(),printf()
#include <stdio.h>

int main() {
    int start, stop;

    // Prompt user for starting and stopping values
    printf("Enter the starting value: ");
    scanf("%d", &start);
    printf("Enter the stopping value: ");
    scanf("%d", &stop);

    // Do-while loop to print numbers from start to stop
    printf("Numbers from %d to %d:\n", start, stop);
    int i = start;  
    if (start <= stop) {
        do {
            printf("%d\n ", i);
            i++;  // 
        } while (i <= stop);  
    } else {
        printf("Invalid range, starting value should be less than or equal to stopping value.\n");
    }

    
    return 0;
}

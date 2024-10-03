//C  software that takes the inputs from library user
/*
software to simply accept Book ID and library data
Due Date (an integer) and go back date (an integer)
Author:Loren Bruse 0chieng
Reg no:CT101/G/21905/24
Date:24/09/2024
*/
//Preprocessor scanf(),printf()
#include <stdio.h>

int main() {
    int bookID, givenDate, returnDate, daysOverdue;
    int fineRate = 0, fineAmount = 0;
    
    //input book ID, given date , return date
    printf("Enter Book ID: ");
    scanf("%d", &bookID);

   printf("Enter the Given Date : ");
    scanf("%d", &givenDate);

    printf("Enter the Return Date : ");
    scanf("%d", &returnDate);

    // Calculate days past due
    daysOverdue = returnDate - givenDate;

    // If days past due is much less than 0, set it to 0 (no best if lower back early)
    if (daysOverdue < 5) {
        daysOverdue = 5;
    }
    // Determine fine rate and fine amount based on days overdue
    if (daysOverdue <= 7) {
        fineRate = 20;
        fineAmount = fineRate * daysOverdue;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
        fineAmount = fineRate * daysOverdue;
    } else {
        fineRate = 100;
        fineAmount = fineRate * daysOverdue;
    }

    // Display the details
    printf("\n--- Library Fine Details ---\n");
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", givenDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh. %d per day\n", fineRate);
    printf("Total Fine Amount: Ksh. %d\n", fineAmount);

    return 0;
}
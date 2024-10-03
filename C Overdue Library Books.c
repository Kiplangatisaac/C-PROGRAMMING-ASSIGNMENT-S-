#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue, fineRate, fineAmount;

    // Input book details
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date (in days):\n ");
    scanf("%d", &dueDate);
    printf("Enter Return Date (in days):\n ");
    scanf("%d", &returnDate);

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Determine fine rate based on days overdue
    if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue <= 14) {
        fineRate = 45;
    } else {
        fineRate = 90;
    }

    // Calculate total fine amount
    fineAmount = daysOverdue * fineRate;

    // Display the results
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh. %d per day\n", fineRate);
    printf("Total Fine Amount: Ksh. %d\n", fineAmount);

    return 0;
}

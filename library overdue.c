#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue, fineRate, fineAmount;

    
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date (in days): ");
    scanf("%d", &dueDate);
    printf("Enter Return Date (in days): ");
    scanf("%d", &returnDate);

    
    daysOverdue = returnDate - dueDate;

    
    if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
    } else {
        fineRate = 100;
    }

    
    fineAmount = daysOverdue * fineRate;

    
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh. %d per day\n", fineRate);
    printf("Fine Amount: Ksh. %d\n", fineAmount);

    return 0;
}

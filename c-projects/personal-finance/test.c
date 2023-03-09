#include <stdio.h>

struct expense {
    char name[50];
    double amount;
};

int main() {
    int num_expenses;
    printf("Enter the number of expenses: ");
    scanf("%d", &num_expenses);  // Read the number of expenses from standard input

    struct expense expenses[num_expenses];  // Declare an array of 'num_expenses' struct expense

    // Read the name and amount of each expense from standard input
    for (int i = 0; i < num_expenses; i++) {
        printf("Enter the name of expense %d: ", i+1);
        scanf("%s", expenses[i].name);

        printf("Enter the amount of expense %d: ", i+1);
        scanf("%lf", &expenses[i].amount);
    }

    // Print the list of expenses
    printf("\nList of expenses:\n");
    for (int i = 0; i < num_expenses; i++) {
        printf("%s: %.2f\n", expenses[i].name, expenses[i].amount);
    }

    return 0;
}


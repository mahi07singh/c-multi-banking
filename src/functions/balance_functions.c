// balance_functions.c
#include <stdio.h>
#include "../headers/design_headers.h"

extern struct ATM *accounts;

void balance()
{
    // Display the user information
    printf("\nAccount Information:\n");
    printf("Account Number: %d\n", accounts->accno);
    printf("Account Name: %s", accounts->name);
    printf("Amount: %d\n", accounts->amount);
    printf("Account Type: %s\n", accounts->accountType);
}

// display_functions.c
#include <stdio.h>
#include "../headers/design_headers.h"

void displayAccount(struct ATM *accounts, int totalAccounts) {
    if (totalAccounts > 0) {
        printf("\nAccount Details:\n");

        for (int i = 0; i < totalAccounts; i++) {
            printf("\nAccount Number: %d\n", accounts[i].accno);
            printf("Account Name: %s\n", accounts[i].name);
            printf("Amount: %d\n", accounts[i].amount);
            printf("Account Type: %s\n", accounts[i].accountType);
            printf("----------------------------\n");
        }
    } else {
        printf("\nNo accounts created yet.\n");
    }
}

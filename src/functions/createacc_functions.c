// creatacc_functions.c
#include <stdio.h>
#include <string.h>  // Include for strcspn function
#include "../headers/design_headers.h"
struct ATM *accounts; // Define a pointer to an array of structures

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void createacc(struct ATM *accounts, int *totalAccounts) {
    int i;
    for (i = 0; i < 3; i++) {
       printf("Enter Account Number: ");
        scanf("%d", &accounts[*totalAccounts].accno);
        clearInputBuffer();

        printf("Enter Account Name: ");
        fgets(accounts[*totalAccounts].name, sizeof(accounts[*totalAccounts].name), stdin);
        accounts[*totalAccounts].name[strcspn(accounts[*totalAccounts].name, "\n")] = '\0';

        printf("Enter Amount: ");
        scanf("%d", &accounts[*totalAccounts].amount);
        clearInputBuffer();

        printf("Enter Account Type: ");
        fgets(accounts[*totalAccounts].accountType, sizeof(accounts[*totalAccounts].accountType), stdin);
        accounts[*totalAccounts].accountType[strcspn(accounts[*totalAccounts].accountType, "\n")] = '\0';

        // Increment the total number of accounts
        (*totalAccounts)++;

        // Print the entered information
        printf("\nAccount Information Entered:\n");
        printf("Account Number: %d\n", accounts[*totalAccounts - 1].accno);
        printf("Account Name: %s\n", accounts[*totalAccounts - 1].name);
        printf("Amount: %d\n", accounts[*totalAccounts - 1].amount);
        printf("Account Type: %s\n", accounts[*totalAccounts - 1].accountType);

    }
}
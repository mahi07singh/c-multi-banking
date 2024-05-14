// withd_functions.c
#include <stdio.h>
#include "../headers/design_headers.h"

void withd(struct ATM *accounts)
{
    int acno, i;
    int amt, f = 0;
    printf("\nEnter an Account Number: ");
    scanf("%d", &acno);
    for (i = 0; i < 3; i++)
    {
        if (accounts[i].accno == acno)
        {
            printf("\nEnter an Amount for Withdrawal: ");
            scanf("%d", &amt);
            if (amt <= 0)
            {
                printf("\nInvalid Amount....");
            }
            else if (accounts[i].amount < amt)
            {
                printf("\nInsufficient Balance.....");
            }
            else
            {
                accounts[i].amount -= amt; // Subtract the withdrawal amount
                printf("\nWithdrawal of %d amount successful.", amt);
            }
        }
    }
}

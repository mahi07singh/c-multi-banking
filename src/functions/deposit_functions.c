// deposit_functions.c
#include <stdio.h>
#include "../headers/design_headers.h"

void deposit(struct ATM *accounts)
{
    int acno, i;
    int amt, f = 0;
    printf("\nEnter an Account Number: ");
    scanf("%d", &acno);
    for (i = 0; i < 3; i++)
    {
        if (accounts[i].accno == acno)
        {
            printf("\nEnter an Amount for Deposit: ");
            scanf("%d", &amt);

            if (amt >= 0)
            {
                printf("\nDepositing %d amount...", amt);
                accounts[i].amount += amt; // Add the deposit amount
                printf("\nUpdated Balance: %d", accounts[i].amount);
            }
            else
            {
                printf("\nInvalid Amount. Deposit amount must be non-negative.");
            }
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        printf("Invalid Account Number... \t Please check.");
    }
}

// // deposit_functions.c
// #include <stdio.h>
// #include "../headers/design_headers.h"

// void deposit(struct ATM *accounts)
// {
//     int acno, i;
//     int amt, f = 0;
//     printf("\nEnter an Account Number: ");
//     scanf("%d", &acno);
//     for (i = 0; i < 3; i++)
//     {
//         printf("\nThis is acno number %d: ", acno);
//         printf("\nThis is accno number %d: ", accounts[i].accno);

//         if (accounts[i].accno == acno)
//         { // Fix the typo here
//             f = 1;
//             printf("\nEnter an Amount for Deposit: ");
//             scanf("%d", &amt);

//             if (amt >= 0)
//             {
//                 printf("\nDepositing %d amount...", amt);
//                 accounts[i].accno += amt; // Add the deposit amount
//                 printf("\nUpdated Balance: %d", accounts[i].accno);
//             }
//             else
//             {
//                 printf("\nInvalid Amount. Deposit amount must be non-negative.");
//             }
//             break;
//         }
//     }
//     if (f == 0)
//     {
//         printf("Invalid Account Number... \t Please check.");
//     }
// }

// // deposit_functions.c
// #include <stdio.h>
// #include "../headers/design_headers.h"

// struct ATM A1[3];

// void deposit()
// {
//     int accno, i;
//     int amt, f = 0;
//     printf("\nEnter an Account Number");
//     scanf("%d", &accno);
//     for (i = 0; i < 3; i++)
//     {
//         if (A1[i].acno == accno)
//         {
//             f = 1;
//             printf("\nEnter an Amount for Deposit: ");
//             scanf("%d", &amt);

//             if (amt >= 0)
//             {
//                 printf("\nDepositing %d amount...", amt);
//                 A1[i].amount += amt; // Add the deposit amount
//             }
//             else
//             {
//                 printf("\nInvalid Amount. Deposit amount must be non-negative.");
//                 break;
//             }
//         }
//     }
//     if (f == 0)
//     {
//         printf("Invalid Account NO... \t please check..");
//     }
// }

// main.c
#include <stdio.h>
#include <conio.h> // Include the conio.h header for getch()

#include "src/headers/design_headers.h"
struct ATM accounts[3];  // Define an array of structures

int main()
{
    int choice;
    int count = 0;
    char chOne, chTwo, chThree, chFour;
    int totalAccounts = 0; // Variable to keep track of the total number of accounts
pin:
    printf("\n Enter Your Pin:");
    chOne = getch();
    printf("*");
    chTwo = getch();
    printf("*");
    chThree = getch();
    printf("*");
    chFour = getch();
    printf("*");
    if (chOne == 'd' && chTwo == 'a' && chThree == 't' && chFour == 'a')
    {
        do
        {
            design();
            printf("\n Enter Your Choice: ");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                createacc(accounts, &totalAccounts);
                break;
            case 2:
                deposit(accounts);  // Pass the accounts array
                break;
            case 3:
                withd(accounts);
                break;
            case 4:
                balance();
                break;
            case 5:
                exitPrograme();
                break;
            case 6:
                displayAccount(accounts, totalAccounts); // Provide the required arguments
                break;

            default:
                printf("Invalid choice.....");
                break;
            }

        } while (choice != 5);
    }
    else
    {
        printf("\n Invalid Pin..\t Please Try Again.\n");
        if (count != 2)
        {
            count++;
            goto pin;
        }
        else
        {
            incorrectPassword();
        }
    }
    // Add your code here based on the user's choice

    return 0;
}

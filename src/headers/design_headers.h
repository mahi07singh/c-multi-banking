// design.h

#ifndef DESIGN_H
#define DESIGN_H

struct ATM {
    int accno;
    char name[50];
    int amount;
    char accountType[20];
};

void design();
void createacc(struct ATM *accounts, int *totalAccounts); // Pass accounts and totalAccounts as parameters
void deposit(struct ATM *accounts);   // Added semicolon here
void withd(struct ATM *accounts);   // Added semicolon here
void balance();   // Added semicolon here
void exitPrograme();   // Added semicolon here
void incorrectPassword();   // Added semicolon here
void displayAccount(struct ATM *accounts, int totalAccounts);

#endif
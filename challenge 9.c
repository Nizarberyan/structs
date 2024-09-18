#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[25];
    double account_balance;
} bank_account;

void modify_balance(double *new_balance, char *name, bank_account *bankaccount)
{
    if (strcmp(name, bankaccount->name) == 0)
    {
        printf("enter the new balance: ");
        scanf("%lf", &bankaccount->account_balance);
    }
    else
    {
        printf("account not found :(");
    }
}

int main()
{
    double new_balance = 0;
    char name[25];

    bank_account bankaccount = {"nizar", 0};

    printf("enter your name: ");
    scanf("%s", name);

    modify_balance(&new_balance, name, &bankaccount);

    printf("the new balance is: %.2lf", bankaccount.account_balance);

    return 0;
}

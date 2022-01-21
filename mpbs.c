#include <stdio.h>
#include<stdlib.h>
int TotalAmount = 0, Amount, amo, tr, Totalwith = 0, Totaltr = 0, Totaldiposite = 0, acc;
char a[100];
int list()
{
    int ch;
    printf("\n1. DEPOSIT AMOUNT. ");
    printf("\n2. WITHDRAWL AMOUNT. ");
    printf("\n3. TRANSFER AMOUNT. ");
    printf("\n4. CHECK DETAIL. ");
    printf("\n5. EXIT :) ");
    printf("\n ENTER YOUR CHOICE : ");
    scanf("%d", &ch);
    return (ch);
}
void deposite()
{
    printf("\nEnter the Amount you want to deposite: ");

    scanf("%d", &Amount);

    TotalAmount += Amount;
}

void withdrawl()
{
    printf("\nEnter the Amount you wish to withdraw: ");
    scanf("%d", &amo);
    if (amo <= TotalAmount)
        TotalAmount -= amo;
    else
        printf("Your balance is low \n transaction cannot be possible.");
}

void transfer()
{
    printf("\nEnter the amount you want to tranfer: ");
    scanf("%d", &tr);
    if (tr <= TotalAmount)
        TotalAmount -= tr;
    else
        printf("\nTransfer is not possible.");
}

void checkDetail()
{
    printf("\nTotal Amount=%d", TotalAmount);
    printf("\nTotal Diposited Amount=%d", Totaldiposite);
    printf("\nTotal Withdraw Amount=%d", Totalwith);
    printf("\nTotal Transferred Amount=%d", Totaltr);
}
void last()
{
    printf("\n\n\n*************************************\n\n\n");
    printf("\nName : %s", a);
    printf("\nAccount Number : %d", acc);
    printf("\nTotal Amount : %d", TotalAmount);
    printf("\nTotal Diposited Amount : %d", Totaldiposite);
    printf("\nTotal Withdraw Amount : %d", Totalwith);
    printf("\nTotal Transferred Amount : %d", Totaltr);
    printf("\n\n\n ************THANKS***********");
}

int main()
{
    printf("Hi !!! \nMy name is YOGESH KIMARI\nI have created this small banking project using C language.\n\n\nEnter your name: ");
    gets(a);
    printf("Enter your Account Number: ");
    scanf("%d", &acc);

    while (1)
    {
        switch (list())
        {
        case 1:
            deposite();
            Totaldiposite += Amount;
            break;
        case 2:
            withdrawl();
            if (amo <= TotalAmount)
                Totalwith += amo;
            break;
        case 3:
            transfer();
            if (tr <= TotalAmount)
                Totaltr += tr;
            break;

        case 4:
            checkDetail();
            break;
        case 5:
            last();
            // break;
            exit(0);

        default:
            printf("\nInvalid choice");
            // break;
        }
    }
    return 0;
}

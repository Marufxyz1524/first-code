#include <stdio.h>
#include <math.h>

int main()
{
    int pin, option;
    float balance = 10000;
    float amount;

    printf("------------ATM MACHINE-----------\n");
    printf("Enter your pin number: ");
    scanf("%d", &pin);

    if (pin == 6756)
    {
        printf("---LOGIN SUCCESFULL---\n");

        printf("1.Check Balance: \n");
        printf("2.Withdrow balance: \n");
        printf("3.Deposite Balance: \n");
        printf("4.Exit\n");
        printf("________________________\n");

        printf("Choose Option : ");
        scanf("%d", &option);
        if (option == 1)
        {
            printf("Your Balance: %.2f", balance);
        }
        else if (option == 2)
        {
            printf("Withdrow amount: \n");
            scanf("%f", &amount);

            if (amount <= balance && amount > 0)
            {
                balance -= amount;
                printf("Withdrow Successful\n");
                printf("Your Remaining balance:%.2f", balance);
            }
            else
            {
                printf("Invalid or Insufficients Balance.");
            }
        }
        else if (option == 3)
        {
            printf("Deposit Balance: \n");
            scanf("%f", &amount);
            if (amount > 0)
            {
                balance += amount;
                printf("Deposit Successful----\n");
                printf("Now your total balance:%f\n", balance);
            }
        }

        else if (option == 4)
        {
            printf("Thank you for using our ATM service.\n");
        }
        else
        {
            printf("Invalid Option\n");
        }
    }
    else
    {
        printf("Wrong pin ");
    }

    return 0;
}
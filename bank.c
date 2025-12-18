#include <stdio.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Account acc[10];
    int choice, count = 0, i, search;
    float amount;

    while (1)
    {
        printf("\n---- BANK MANAGEMENT SYSTEM ----\n");
        printf("1. Create Account\n");
        printf("2. View Account\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Account No: ");
            scanf("%d", &acc[count].accNo);
            printf("Enter Name: ");
            scanf("%s", acc[count].name);
            printf("Enter Initial Balance: ");
            scanf("%f", &acc[count].balance);
            count++;
            printf("Account Created Successfully!\n");
            break;

        case 2:
            printf("Enter Account No: ");
            scanf("%d", &search);
            for (i = 0; i < count; i++)
            {
                if (acc[i].accNo == search)
                {
                    printf("Name: %s\n", acc[i].name);
                    printf("Balance: %.2f\n", acc[i].balance);
                }
            }
            break;

        case 3:
            printf("Enter Account No: ");
            scanf("%d", &search);
            printf("Enter Amount: ");
            scanf("%f", &amount);
            for (i = 0; i < count; i++)
            {
                if (acc[i].accNo == search)
                {
                    acc[i].balance += amount;
                    printf("Deposit Successful!\n");
                }
            }
            break;

        case 4:
            printf("Enter Account No: ");
            scanf("%d", &search);
            printf("Enter Amount: ");
            scanf("%f", &amount);
            for (i = 0; i < count; i++)
            {
                if (acc[i].accNo == search)
                {
                    if (acc[i].balance >= amount)
                    {
                        acc[i].balance -= amount;
                        printf("Withdraw Successful!\n");
                    }
                    else
                    {
                        printf("Insufficient Balance!\n");
                    }
                }
            }
            break;

        case 5:
            printf("Thank You for Using Bank System!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
}

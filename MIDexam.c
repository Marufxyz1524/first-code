#include <stdio.h>

int main()
{
    /**"SWITC CASE STATEMENT"
    int item_code, quantity, price;
    float total_bill;

    printf("Enter item code (1-3):");
    scanf("%d", &item_code);

    printf("Enter Quantity:");
    scanf("%d", &quantity);

    switch (item_code)
    {
    case 1:
        price = 180;
        break;
    case 2:
        price = 190;
        break;
    case 3:
        price = 202;
        break;
    default:
        printf("Invalid Choice\n");
    }
    total_bill = price * quantity;
    printf("Total Bill = %f\n", total_bill);

    return 0;
    */
    /**int balance = 1000;
    int result;

    while (1)
    {
        printf("Enter round result win(1)-lose(0): ");
        scanf("%d", &result);

        if (result == 1)
        {
            balance += 500;
        }
        else
        {
            balance -= 500;
        }
        if (balance <= 0)
        {
            printf("Player Elilminatd.");
            printf("Balance Reached !!");
            break;
        }

        char choice;
        printf("Continue?(y/n): ");
        scanf(" %c", &choice);

        if (choice == 'n')
        {
            printf("Final balance %d\n", balance);
            printf("Status: Survived");
            break;
        }
    }

    return 0;*/

    // SECTION N SOLVE:
    /**double num1, num2, result;
    int operation;
    char category;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Enter operation code: ");
    scanf("%d", &operation);

    printf("Enter performance category (E/G/A): ");
    scanf(" %c", &category);

    // Perform operation using switch
    switch(operation) {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            if(num2 != 0)
                result = num1 / num2;
            else {
                printf("Division by zero is not allowed.\n");
                return 0;
            }
            break;
        default:
            printf("Invalid operation code.\n");
            return 0;
    }

    // Apply bonus
    if(category == 'E' || category == 'e') {
        result = result + (result * 0.10);
    }
    else if(category == 'G' || category == 'g') {
        result = result + (result * 0.05);
    }
    else if(category == 'A' || category == 'a') {
        // No bonus
    }
    else {
        printf("Invalid category.\n");
        return 0;
    }

    printf("Final Result: %.2lf\n", result);

    return 0;

**/
}
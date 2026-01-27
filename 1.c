#include <stdio.h>

int main()
{
    int a, b, c, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    (a > b && a > c) && (max = a);
    (b > a && b > c) && (max = b);
    (c > a && c > b) && (max = c);

    printf("Maximum number = %d\n", max);

    return 0;
}

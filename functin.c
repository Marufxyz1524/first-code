#include <stdio.h>

/**void printIntro()
{
    printf("Hello!!\n");
    printf("My name is Maruf.");
    printf("My hometown Rangpur.");
}
int main()
{
    printIntro();
    printIntro();
}
*/

/**
  int sum(int a, int b);

int main()
{

    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    int s = sum(a, b);
    printf("Sum is %d", s);
    return 0;
}

int sum(int x, int y)
{
    return x + y;
}
**/

// EVEN--ODD CHECK BY FUNCTION-->>>

/**int evenOdd(int n);
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);

    int res = evenOdd(num);
    if (res == 1)
    {
        printf("The number is Even");
    }
    else
    {
        printf("The number is Odd");
    }
    return 0;
}

int evenOdd(int n)
{
    if (n % 2 == 1)

        return 1;

    else

        return 0;
}
*****/

// CALCULETOR fUNCTION
/**
void calculatePrice(float value);

int main()
{
    float value = 100.00;
    printf("Value is %f\n", value);
    calculatePrice(value);

    return 0;
}
void calculatePrice(float value)
{
    value = value + (0.18 * value);
    printf("Final value is = %f\n", value);
}
***/

// SQUARE--RECTANGLE--SIDE AREA
/**
float sqrArea(float side);
float crclArea(float rad);
float rctnglArea(float a, float b);

int main()
{
    float a = 23;
    float b = 24;
    float side = 10.23;
    float rad = 6;
    printf("Rectangle Area is %f\n", rctnglArea(a, b));
    printf("Square Area is %f\n", sqrArea(side));
    printf("Circle Area is %f\n", crclArea(rad));

    return 0;
}
float sqrArea(float side)
{
    return side * side;
}
float crclArea(float rad)
{
    return 3.14 * rad * rad;
}
float rctnglArea(float a, float b)
{
    return a * b;
}
*/
// RECURSION FUNCTION
/*int sum(int n);
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    printf("The sum is : %d", sum(n));

    return 0;
}
int sum(int n)
{
    if (n == 1)
    { // Here if loop is very important--->>>search chatgpt..
        return 1;
    }
    int sumNm1 = sum(n - 1);
    int sumN = sumNm1 + n;
    return sumN;
}
*/

// Leap Year----->>>>
/*int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? printf("Leap Year") : printf("Not a Leap Year");

    return 0;
}
    */
/*
CONVERT TEMPRETURE BY FUNCTION------>>>>>.....<<<<<<<
float convertFarTOcel(float farnht);
int main()
{
    float farnht;
    printf("Enter your FARHENHIGHT degree : ");
    scanf("%f", &farnht);
    printf("FARENHIGHT TO CELCIOUS : %f ", convertFarTOcel(farnht));
}
float convertFarTOcel(float farnht)
{
    float celcious = ((farnht - 32) * 5) / 9;
    return celcious;
}
    */

/*float avrgCalclte(float math, float chem, float bangla);
int main()
{
    float math, chem, bangla;
    printf("Enter your math mark : ");
    scanf("%f", &math);
    printf("Enter your chem mark : ");
    scanf("%f", &chem);
    printf("Enter your bangla mark : ");
    scanf("%f", &bangla);

    printf("Final Average = %.3f", avrgCalclte(math, chem, bangla));
}
float avrgCalclte(float math, float chem, float bangla)
{
    float avrge = (math + chem + bangla) / 3;
    return avrge;
}
    */

// FIBONACCHI ------->>>>>>>>-----.....,<<<<<
int main()
{
    fib(6);
    return 0;
}
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fibNm1 + fibNm2;
    printf("fib of %d is : %d\n", n, fibN);
    return fibN;
}
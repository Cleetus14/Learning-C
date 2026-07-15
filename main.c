#include <stdio.h>

int isEven(int number)
{
    if (number % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int checkSign(int number)
{
    if (number > 0)
    {
        return 1;
    }
    else if (number < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int square(int number)
{
    return number * number;
}

int max(int firstNumber, int secondNumber)
{
    if (firstNumber > secondNumber)
    {
        return firstNumber;
    }
    else
    {
        return secondNumber;
    }
}

int main()
{
    int firstNumber;
    int secondNumber;

    printf("Enter first number: ");
    scanf_s("%d", &firstNumber);

    if (isEven(firstNumber))
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }

    int sign = checkSign(firstNumber);

    if (sign == 1)
    {
        printf("The number is positive.\n");
    }
    else if (sign == -1)
    {
        printf("The number is negative.\n");
    }
    else
    {
        printf("The number is zero.\n");
    }

    printf("Square: %d\n", square(firstNumber));

    printf("\nEnter second number: ");
    scanf_s("%d", &secondNumber);

    printf("Larger number: %d\n", max(firstNumber, secondNumber));

    return 0;
}
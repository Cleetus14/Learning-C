#include <stdio.h>

void openMenu()
{
    printf("===== Temperature Converter =====\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Choose an option: ");
}

int readOption()
{
    int option;

    scanf_s("%d", &option);

    return option;
}

float readTemperature()
{
    float temperature;

    printf("Enter the temperature: ");
    scanf_s("%f", &temperature);

    return temperature;
}

float celsiusToFahrenheit(float celsius)
{
    return (celsius * 9.0f / 5.0f) + 32.0f;
}

float fahrenheitToCelsius(float fahrenheit)
{
    return (fahrenheit - 32.0f) * 5.0f / 9.0f;
}

int main()
{
    int option;
    float temperature;
    float result;

    openMenu();

    option = readOption();

    temperature = readTemperature();

    switch (option)
    {
    case 1:
        result = celsiusToFahrenheit(temperature);
        printf("Result: %.2f F\n", result);
        break;

    case 2:
        result = fahrenheitToCelsius(temperature);
        printf("Result: %.2f C\n", result);
        break;

    default:
        printf("Invalid option.\n");
        return 1;
    }

    return 0;
}
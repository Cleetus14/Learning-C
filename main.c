#include <stdio.h>

int main()
{
	float firstNumber;
	char operation;
	float secondNumber;
	float result = 0;

	printf("Enter first number: ");
	scanf_s("%f", &firstNumber);

	printf("Enter an operator: ");
	scanf_s(" %c", &operation, 1);

	printf("Enter second number: ");
	scanf_s("%f", &secondNumber);

	switch (operation)
	{
	case '+':
		result = firstNumber + secondNumber;
		break;

	case '-':
		result = firstNumber - secondNumber;
		break;

	case '*':
		result = firstNumber * secondNumber;
		break;

	case '/':
		if (secondNumber == 0)
		{
			printf("Cannot divide by zero.");
			return 1;
		}
		else
		{
			result = firstNumber / secondNumber;
		}
		break;

	default:
		printf("Invalid operator. (Could also be an invalid number)");
		return 1;
	}

	printf("Result: %.3f\n", result);

	return 0;
}
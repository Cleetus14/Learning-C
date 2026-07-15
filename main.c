#include <stdio.h>

float add(float x, float y) {
	return x + y;
}

float subtract(float x, float y) {
	return x - y;
}

float multiply(float x, float y) {
	return x * y;
}

float divide(float x, float y) {
	return x / y;
}

int main()
{
	float firstNumber;
	float secondNumber;
	float result;
	char operation;

	printf("Enter first number: ");
	scanf_s("%f", &firstNumber);

	printf("Enter an operator (+, -, *, /): ");
	scanf_s(" %c", &operation, 1);

	printf("Enter second number: ");
	scanf_s("%f", &secondNumber);

	switch (operation)
	{
	case '+':
		result = add(firstNumber, secondNumber);
		printf("Result: %.3f\n", result);
		break;

	case '-':
		result = subtract(firstNumber, secondNumber);
		printf("Result: %.3f\n", result);
		break;

	case '*':
		result = multiply(firstNumber, secondNumber);
		printf("Result: %.3f\n", result);
		break;

	case '/':
		if (secondNumber == 0)
		{
			printf("Cannot divide by zero.\n");
			return 1;
		}

		result = divide(firstNumber, secondNumber);
		printf("Result: %.3f\n", result);
		break;

	default:
		printf("Invalid operator.\n");
		return 1;
	}

	return 0;
}
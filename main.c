#include <stdio.h>

int main() {

	float weight;
	float height;
	float BMI;

	printf("Enter your weight (kg): ");
	scanf_s("%f", &weight);

	printf("Enter your height (m): ");
	scanf_s("%f", &height);

	BMI = weight / (height * height);

	printf("Your BMI is: %.2f\n", BMI);

	if (BMI < 18.5) {
		printf("You are underweight.");
	}
	else if (BMI >= 30) {
		printf("You are obese.");
	}
	else if (BMI >= 25) {
		printf("You are overweight.");
	}
	else (printf("You have a normal and healthy weight.")); {
	}

	return 0;
}
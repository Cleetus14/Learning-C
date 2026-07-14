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

	return 0;
}
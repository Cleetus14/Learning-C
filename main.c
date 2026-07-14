#include <stdio.h>

int main() {

	float mealPrice, tip, totalPrice;

	printf("Enter the price of your meal: $");
	scanf_s("%f", &mealPrice);

	tip = mealPrice * 0.15f;
	totalPrice = mealPrice + tip;

	printf("The tip required with your meal is: $%.2f\n", tip);
	printf("The total price of your meal is: $%.2f\n", totalPrice);

	return 0;

}
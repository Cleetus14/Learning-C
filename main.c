#include <stdio.h>

int main() {

	int number;

	printf("Enter a number: ");
	scanf_s("%d", &number);

	if (number > 0) {
		printf("This number is positive.\n");
	}
	else if (number < 0) {
		printf("This number is negative\n");
	}
	else {
		printf("This number is zero.\n");
	}

	if (number % 2 == 0) {
		printf("This number is even.");
	}
	else (printf("This number is odd"));
}
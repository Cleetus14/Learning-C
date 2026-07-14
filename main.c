#include <stdio.h>

int main() {

	int age;

	printf("Enter your age:  ");
	scanf_s("%d", &age);

	if (age < 0) {
		printf("Please enter a valid age");
	}
	else if (age >= 0 && age <= 12) {
		printf("You are a child.");
	}
	else if (age >= 13 && age <= 17) {
		printf("You are a teenager");
	}
	else if (age >= 18 && age <= 64) {
		printf("You are an adult");
	}
	else printf("You are a senior.");

	return 0;
}
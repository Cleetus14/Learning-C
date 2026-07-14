#include <stdio.h>

int main() {

	int testScore;

	printf("What grade did you get on your test?: ");
	scanf_s("%d", &testScore);

	if (testScore >= 90) {
		printf("Excellent!");
	}
	else if (testScore >= 80) {
		printf("Great job!");
	}
	else if (testScore >= 70) {
		printf("Good work!");
	}
	else if (testScore <= 69) {
		printf("Keep practicing!");
	}
} 
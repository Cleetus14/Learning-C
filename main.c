#include <stdio.h>

void spawnMultiplicationTable() {
    int number = 0;
    int otherNumber = 0;
    int answer;

    printf("Enter a number: ");
    scanf_s("%d", &number);

    for (otherNumber = 1; otherNumber <= 12; otherNumber++) {
        answer = number * otherNumber;
        printf("%d x %d = %d\n", number, otherNumber, answer);
    }
}

int main() {

    spawnMultiplicationTable();

    return 0;
}
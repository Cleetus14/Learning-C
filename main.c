#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame(int randomNum) {
    int guess = 0;
    int attempts = 0;

    printf("===== Number Guessing Game =====\n\n");

    while (1) {
        printf("Guess a number between 1 and 50: ");
        scanf_s("%d", &guess);
        attempts++;

        if (guess < randomNum) {
            printf("Too low!\n");
        }
        else if (guess > randomNum) {
            printf("Too high!\n");
        }
        else {
            printf("Correct!\n");
            printf("You guessed the number in %d attempts!\n", attempts);
            break;
        }
    }
}

int main() {
    srand(time(NULL));
    int randomNum = rand() % 50 + 1;

    playGame(randomNum);

    return 0;
}
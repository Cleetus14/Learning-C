#include <stdio.h>

void generatePattern() {
    
    int size = 0;
    int row = 0;
    int pattern = 0;

    printf("Enter a size: ");
    scanf_s("%d", &size);

    for (row = 1; row <= size; row++)
    {
        for (pattern = 1; pattern <= row; pattern++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {

    generatePattern();

    return 0;
}
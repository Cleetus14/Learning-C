#include <stdio.h>

int main()
{
    char name[50];
    int age;
    char favoriteProgrammingLanguage[50];
    int favoriteNumber;

    printf("Enter Your Name: ");
    scanf_s("%s", name, 50);

    printf("Enter Your Age: ");
    scanf_s("%d", &age);

    printf("Enter Your Favorite Programming Language: ");
    scanf_s("%s", favoriteProgrammingLanguage, 50);

    printf("Enter Your Favorite Number: ");
    scanf_s("%d", &favoriteNumber);

    printf("\n--- Interview Results ---\n");

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Favorite Programming Language: %s\n", favoriteProgrammingLanguage);
    printf("Favorite Number: %d\n", favoriteNumber);

    return 0;
}
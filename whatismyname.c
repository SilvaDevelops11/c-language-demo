#include <stdio.h>
#include <stdlib.h>

int main() {
    char firstName[20];
    char lastName[20];
    int age;

    printf("What is your first name? ");
    scanf("%s", firstName);
    printf("What is your last name? ");
    scanf("%s", lastName);
    printf("How old are you? ");
    scanf("%d", &age);

    printf("You entered: %s %s, Age: %d\n", firstName, lastName, age);
    printf("Hello, %s %s!\n", firstName, lastName);
    printf("You are %d years old.\n", age);

    return 0;
}
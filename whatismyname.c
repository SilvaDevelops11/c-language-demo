#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[20];
    char age[3];
    printf("What is your name? ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    printf("what is your age? so I can tell you how old you will be in 10 years\n");
    scanf("%s", age);
    int age_int = atoi(age);
    printf("%s, In 10 years you will be %d years old\n", name, age_int + 10);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[20];
    printf("What is your name? ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    printf("Goodbye, %s!\n", name);
    return 0;
}
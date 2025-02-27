#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[20];
    printf("What is your name? ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    printf("where are you from, %s?\n", name);
    char place[30];
    scanf("%s", place);
    printf("I see, %s is a nice place!\n", name);





    return 0;
}
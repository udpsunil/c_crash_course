#include <stdio.h>

int main()
{
    printf("Hello World\n");

    int x = 50; // identifier x is used to represent value of 50
    int y;      // declaration of variable y with a type
    y = 10;     // initialization done with assignment operation.

    printf("%s World has a value of %d\n", "Hello", x);

    int z;
    printf("Enter the value of z: ");
    scanf("%d", &z); // address of operation & it holds address where the value from scanf should reside.
    printf("Value of Z is %d\n", z);

    char name[20]; // char array of 20 characters. Ends with '\0' to represent end of string.
    printf("Enter your name: ");
    scanf("%19s", name); // no need to add & as arrays decode to pointers
    printf("Your name is %s\n", name);
    return 0;
}
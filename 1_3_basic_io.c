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
    return 0;
}
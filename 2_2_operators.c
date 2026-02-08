#include <stdio.h>

int main()
{
    // forece precedence with ()
    int x = 2 * (3 + 3);
    int y = (2 * 3) + 3;
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    printf("modulus operator:\n");
    int c = 10 % 3;
    printf("10 %% 3 = %d\n", c);

    printf("Unary minus:\n");
    int a = 5;
    int b = -a;
    printf("B value is %d\n", b);

    a = 5;
    b = 5;
    b = a++; // b gets assigned to a first and then a++ is performed.
    printf("b = %d\n", b);
    printf("a = %d\n", a);

    a = 5;
    b = 5;
    b = ++a; // a gets incremented and then b gets assigned with incremented values of a

    printf("Pre increment:\n");
    printf("b = %d\n", b); 
    printf("a = %d\n", a);

    // precedence and associativity
    b += a;
    printf("b += a = %d\n", b);

    a *= 30;
    printf("a *= 30 = %d\n", a);

    a %= 140;
    printf("a %%= 140 = %d\n", a);

    return 0;
}
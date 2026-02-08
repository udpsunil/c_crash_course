#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 10;      // Statically typed
    double b = 10.5; // 64 bit number
    printf("%lu\n", sizeof(b));
    float c = 10.5; // 32 bit number
    printf("%lu\n", sizeof(c));
    char d = 'a';
    printf("%lu\n", sizeof(d));
    char e[] = "Char Array";
    printf("%lu\n", sizeof(e));
    bool f = false;
    printf("%lu\n", sizeof(f));

    int zero = 0.999999999;
    printf("Zero is %d\n", zero);

    int slices = 17;
    int people = 2;

    double slices_per_person = (double)slices / people; // typecasting into a higher type
    printf("Slices per people is %lf\n", slices_per_person);

    double test1 = (25 / 2) * 2;         // 24.0
    double test2 = 25 / 2 * 2.0;         // 24.0
    double test3 = 25.0 / 2 * 2;         // 25.0
    double test4 = (double)25 / 2 * 2.0; // 25.0

    printf("test1 %lf\n", test1);
    printf("test2 %lf\n", test2);
    printf("test3 %lf\n", test3);
    printf("test4 %lf\n", test4);
    return 0;
}
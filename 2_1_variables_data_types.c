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
    return 0;
}
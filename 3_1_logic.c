#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age = 17;
    double money = 30000;
    bool is_graduated = true;

    if (age > 17 && money > 25000 || is_graduated)
    {
        printf("This is an adult\n");
    }
    else
    {
        printf("This is not an adult\n");
    }
    return 0;
}
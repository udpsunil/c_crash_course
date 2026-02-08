#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age = 17;
    double money = 30000;
    bool is_graduated = true;
    int menu_choice = 0;

    if (age > 17 && money > 25000 || is_graduated)
    {
        printf("This is an adult\n");
    }
    else
    {
        printf("This is not an adult\n");
    }

    switch (menu_choice)
    {
    case 0:
        /* code */
        printf("Case 0\n");
        break;
    case 1:
        printf("Case 1\n");
        break;

    case 2:
        printf("Case 2\n");
        break;

    case 3:
        printf("Case 3\n");
        break;

    default:
        printf("Default case\n");
        break;
    }
    return 0;
}
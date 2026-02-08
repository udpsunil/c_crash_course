#include <stdio.h>

int main()
{
    int size = 10;
    int ages[] = {12, 43, 54, 3, 5, 53, 6, 7, 87, 122};
    int calculated_size = sizeof(ages) / sizeof(ages[0]);

    for (int i = 0; i < calculated_size; i++)
    {
        printf("Ages[%d] = %d\n", i, ages[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
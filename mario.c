#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 0);

    for (int row = 0; row < height; row++)
    {
        for (int hash = 0; hash <= row; hash++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}

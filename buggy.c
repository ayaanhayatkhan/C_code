#include<cs50.h>
#include<stdio.h>

void printf_column(int height);

int main(void)
{
int h = get_int("Height: ");
printf_column(h);
}

void printf_column(int height)
{
    for (int i = 0; i <= height; i++)
    {
        printf("#\n");
        
    }
}
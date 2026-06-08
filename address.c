#include<stdio.h>

int main (void)
{
int n = 10;
int *p ;
p = &n;

printf("%p\n",p);
printf("\nThe value of n is = %d",n);
*p = 30;
printf("\nThe value of n is = %d",n);

printf("\nThe value of n through pointer p = %d\n",*p);

}
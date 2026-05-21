// To provide 5 values to array anh then display it .
#include<stdio.h>

int main(void)
{
int array[5];
int sum = 0;
float average = 0;


printf("Enter five valus for array\n");
for(int i = 0 ; i < 5 ; i++)
{
    scanf("%d", &array[i]);
    
}
for (int i = 0; i < 5 ; i++)
{
    sum = sum + array[i];
printf("The numbers are : %d\n", array[i]);

}

printf("\nSum of array is %d\n", sum);
average =sum/5.0;
printf("The average is : %.2f\n", average);





}
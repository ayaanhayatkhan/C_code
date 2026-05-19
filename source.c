// Average three numbers using an arry , a constant , and a helper function .

#include <cs50.h>
#include <stdio.h>


// Constants

const int N = 3;

// Prototypes

float average (int length , int array[]);

int main (void)
{
    // Declare an array of integers
    int numbers [N];

    // Get N numbers from the user

    for (int i = 0; i < N; i++)
    {
        numbers[i] = get_int("Number: ");
    }

    // Print the average
    
    printf ("Average: %f\n", average(N,numbers));
    
}

float average (int length, int array[])
{
    int sum=0;
    for (int i = 0; i<length; i++)
    {
        sum = sum +array[i]; 
        // can also be written as sum+=array[i]
        
    }
    return (sum/length);
}
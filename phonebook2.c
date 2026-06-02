#include<cs50.h>
#include<stdio.h>
#include<string.h>

typedef struct
{
    string name;
    string number;
}person;
int main(void)
{
    person people[3];
    people[0].name = "Ayaan";
    people[0].number = "+1-617-495-1000";

    people[1].name = "Hayat";
    people[1].number = "+1-949-468-2750";


    people[2].name = "Khan";
    people[2].number = "+1-617-495-1000";
    
    string n = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp( people[i].name, n) == 0)
        {
            printf("Hello%s\n",n);
        
            printf("Found: %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
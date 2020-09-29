#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string numbers;
}
person;

int main(void)
{
    person people[4];

    people[0].name = "EMMA";
    people[0].numbers = "617-555-0100";

    people[1].name = "RODRIGO";
    people[1].numbers = "617-555-0101";

    people[2].name = "BRIAN";
    people[2].numbers = "617-555-0102";

    people[3].name = "DAVID";
    people[3].numbers = "617-555-0103";

    for(int i = 0; i < 4; i++)
    {
        if(strcmp(people[i].name, "DAVID") == 0)
        {
            printf("%s\n", people[i].numbers);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
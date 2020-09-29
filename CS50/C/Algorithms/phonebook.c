#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string names[4] = {"EMMA", "RODRIGO", "BRIAN", "DAVID"};
    string numbers[4] = {"779834-0354", "779223-3245", "729234-24225", "77 98831-6361"};

    for(int i = 0; i < 4; i++)
    {
        if(strcmp(names[i], "DAVID") == 0)
        {
            printf("%s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
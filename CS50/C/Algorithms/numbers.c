#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[6] = {2, 12, 34, 54, 16, 72};

    for(int i = 0; i < 6; i++)
    {
        if(numbers[i] == 50)
        {
            printf("Found\n");
        }
    }
    printf("Not Found\n");
}
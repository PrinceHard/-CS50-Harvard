#include <stdio.h>
#include <cs50.h>

void cof(int n);

int main(void)
{
  cof(5);
}


void cof(int n)
{
    for(int i = 0; i < n; i++)
    {
      printf("cof\n");
    }
}

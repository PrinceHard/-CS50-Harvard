#include <stdio.h>
#include <cs50.h>

int main(void)
{
  char r = get_char("Do you Agree?\n");

  if(r == 'y' || r == 'Y')
  {
    printf("You Agreed\n");
  }
  else if (r == 'n' || r == 'N')
  {
    printf("You Desagreed\n");
  }
}

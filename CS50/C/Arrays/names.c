#include <stdio.h>
#include <cs50.h>

int main(void)
{
  string names[4];
  names[0] = "EMMA";
  names[1] = "PETER";
  names[2] = "HERIC";
  names[3] = "DAVID";

  printf("%s\n", names[1]);
  printf("%c%c%c%c%c\n", names[2][0], names[2][1], names[2][2], names[2][3], names[2][4]);
}

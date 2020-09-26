#include <cs50.h>
#include <stdio.h>

int main(void)
{
  float price = get_float("what's the price ?\n");
  printf("the total is %.2f.\n", price * 1.0625);
}

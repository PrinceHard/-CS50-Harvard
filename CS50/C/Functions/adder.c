#include <stdio.h>
#include <cs50.h>

int soma(int a, int b);

int main(void)
{
  int x = get_int("Digite um inteiro: ");
  int y = get_int("Digite outro inteiro: ");

  int z = soma(x, y);

  printf("A soma entre %i e %i é %i\n", x, y, z);
}

int soma(int a, int b)
{
  int soma2 = a + b;
  return soma2;
}

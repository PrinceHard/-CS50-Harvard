#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int n1 = get_int("Digite um inteiro positivo: ");
  int n2 = get_int("Digite um inteiro positivo: ");
  int n3 = get_int("Digite um inteiro positivo: ");

  if (n1 <= 0 || n2 <= 0 || n3 <= 0)
  {
    printf("Valores inválidos, insira os dados novamente!\n");
  }
  else if (n1 > n2 + n3 && n2 > n1 + n3 && n3 > n2 + n1)
  {
    printf("Não é possível fazer um triângulo com esses valores\n");
  }
  else
  {
    printf("É possível fazer um triângulo com esses valores\n");
  }
}

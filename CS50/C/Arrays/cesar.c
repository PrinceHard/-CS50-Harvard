#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
  int senha = get_int("Digite sua senha: \n");
  string mensagem = get_string("Digite sua mensagem: \n");
  n = strlen(mensagem);
  char frase[n];

  if (senha <= 0)
  {
    printf("Sua senha está inválida, tente outra vez!\n");
  }
  else{
    for (i = 0; i <= n; i++)
    {
      printf("%c", frase[i] - senha);
    }
  }
}

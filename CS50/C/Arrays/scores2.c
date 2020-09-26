#include <stdio.h>
#include <cs50.h>

float average(int comprimento, int array[]);

int main(void)
{
  int n = get_int("Number of Scores: ");
  int scores[n];

  for (int i = 0; i < n; i++)
  {
    scores[i] = get_int("Score %i: ", i + 1);
  }
    printf("Average: %.1f\n", average(n, scores));
}




float average(int comprimento, int array[])
{
  int soma = 0;
  for (int i = 0; i < comprimento; i++)
  {
    soma += array[i];
  }
  return (float) soma / (float) comprimento;
}

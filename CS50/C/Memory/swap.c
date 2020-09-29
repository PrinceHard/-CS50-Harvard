// Swaps two integers using pointers

#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    // o swap está agora passando o endereço de x e o endereço de y.
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}
//aceita os endereços de int e os chama de a e b.
void swap(int *a, int *b)
{
    //está apontando para o real valor de a e b que são x e y respectivamente.
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
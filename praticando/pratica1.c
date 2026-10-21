#include <stdio.h>
void somaProduto(int a, int b, int *soma, int *produto)
{
    *soma = a + b;
    *produto = a * b;
}
int main()
{
    int a, b, soma, produto;
    printf("Digite o valores ");
    scanf("%d %d", &a,&b);

somaProduto(a, b, &soma, &produto);

    printf("a soma dos valores é: %d", soma);
    printf("\no produto dos valores é: %d", produto) ;

return 0;
}
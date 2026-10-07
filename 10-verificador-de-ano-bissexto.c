#include <stdio.h>

int main()
{
    int ano;
    printf("Entre com o ano:\n\n");
    scanf("%d", &ano);

    if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
        printf("\nO ano %d é bissexto", ano);
    }else{
        printf("\nO ano %d não é bissexto", ano);
        }

return 0;
}

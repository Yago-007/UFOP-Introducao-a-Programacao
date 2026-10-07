#include <stdio.h>
float produto, final;
int condicao;
int main()
{
    printf("Digite o preço do produto: ");
    scanf("%f", &produto);
    printf("Digite a condição de pagamento: ");
    scanf("%d", &condicao);

    if(condicao == 1){
        final = produto * 0.90;
            }else if(condicao == 2){
                final = produto * 0.95;
            }else if(condicao == 3){
                final = produto;
            }else if(condicao == 4){
                final = produto * 1.10;
            }else{
                printf("Condição de pagamento invalida");
            }
             printf("O valor final do seu produto sera: R$%.2f", final);
    

    return 0;
}
             
            


            
        

    
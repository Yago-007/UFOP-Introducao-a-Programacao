#include <stdio.h>
int verificar_elegibilidade(int idade, float score);
int main()
{
    int idade, resultado;
    float score;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o score: ", score);
    scanf("%f", &score);

    resultado = verificar_elegibilidade(idade, score);

    if (resultado == 1) {
        printf("ELEGÍVEL");
    } else {
        printf("NÃO ELEGÍVEL");
    }	
    return 0;
}

int verificar_elegibilidade(int idade, float score)
{
    if (idade >= 18 && score >= 7.5) {
        return 1;
    } else {
        return 0;
    }
}





    

    
 




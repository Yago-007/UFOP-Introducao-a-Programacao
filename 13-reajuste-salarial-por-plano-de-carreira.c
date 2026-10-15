#include <stdio.h>
float CalcularNovoSalario(float salario_atual, int codigo_cargo)
{
    float percentual;
    
    switch(codigo_cargo){
        case 100:
           percentual = 3;
            break;
        case 101:
           percentual = 5;
            break;
        case 102:
            percentual = 7.5;
            break;
        case 201:
            percentual = 10;
            break;
        default:
            percentual = 15;
            break;
    }
    return salario_atual + salario_atual * percentual / 100;
}   
int main()
{
    float salario_atual, salario_novo;
    int codigo_cargo;
    
    printf("Entre com o salário: ");
    scanf("%f", &salario_atual);
    printf("\nEntre com o código do cargo: ");
    scanf("%d", &codigo_cargo);

    salario_novo = CalcularNovoSalario(salario_atual, codigo_cargo);

    printf("\nAntigo: R$ %.2f\n\n", salario_atual);
    printf("Novo: R$ %.2f\n\n", salario_novo);
    printf("Diferença: R$ %.2f\n", salario_novo - salario_atual);
    
    return 0;

}
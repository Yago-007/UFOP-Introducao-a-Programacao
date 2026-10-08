#include <stdio.h>
#define PI 3.14159265
int main()
{
    int opcao, unidade;
    float graus, radianos, celsius, fahrenheit, kelvin;
   
    printf("### CONVERSOR DE UNIDADES ###\n\n");
    printf("1) Angulo\n");
    printf("2) Temperatura\n\n");
    printf("Digite uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nQual a unidade de origem?\n\n");
            printf("1) Graus\n");
            printf("2) Radianos\n\n");
            printf("Selecione uma opcao: ");
            scanf("%d", &unidade);
            
            switch (unidade) {
                case 1:
                    printf("\nDigite o valor em Graus: ");
                    scanf("%f", &graus);
                    radianos = PI/180 * graus;
                    printf("Valor em Radianos: %.2f", radianos);
                    break;
                case 2:
                    printf("\nDigite o valor em Radianos: ");
                    scanf("%f", &radianos);
                    graus = 180/PI * radianos;
                    printf("Valor em Graus: %.2f", graus);
                    break;
            }
            break;
        case 2:
            printf("\nQual a unidade de origem?\n\n");
            printf("1) Celsius");
            printf("\n2) Fahrenheit");
            printf("\n3) Kelvin");
            printf("\n\nSelecione uma opcao: ");
            scanf("%d", &unidade);
            
            switch (unidade) {
                case 1:
                    printf("\nDigite o valor em Celsius: ");
                    scanf("%f", &celsius);
                    fahrenheit = 1.8 * celsius + 32;
                    kelvin = 273.15 + celsius;
                    printf("Valor em Fahrenheit: %.2f", fahrenheit);
                    printf("\nValor em Kelvin: %.2f", kelvin);
                    break;
                case 2:
                    printf("\nDigite o valor em Fahrenheit: ");
                    scanf("%f", &fahrenheit);
                    celsius = (fahrenheit - 32) * 5/9;
                    kelvin = (fahrenheit - 32) * 5/9 + 273.15;
                    printf("Valor em Celsius: %.2f", celsius);
                    printf("\nValor em Kelvin: %.2f", kelvin);
                    break;
                case 3:
                    printf("\nDigite o valor em Kelvin: ");
                    scanf("%f",&kelvin);
                    celsius = kelvin - 273.15;
                    fahrenheit = (kelvin - 273.15) * 9/5 + 32;
                    printf("Valor em Celsius: %.2f", celsius);
                    printf("\nValor em Fahrenheit: %.2f", fahrenheit);
                    break;
            }
            break;
    }
                    
return 0;
}
            







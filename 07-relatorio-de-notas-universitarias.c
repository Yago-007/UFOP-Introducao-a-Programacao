#include <stdio.h>
int main()

{   
    int matricula;
    float nota;
    char conceito_final;

    printf("Digite a matricula: ");
    scanf("%d", &matricula);

    printf("Digite a nota: ");
    scanf("%f", &nota);

    if (nota >= 9.0){
    conceito_final = 'A';
    }
    else if (nota >= 8.0){
    conceito_final = 'B';
    }
    else if (nota >= 6.0){
    conceito_final = 'C';
    }
    else if (nota >= 3.0){
    conceito_final = 'D';
    }
    else {
    conceito_final = 'E'; 
    }
    
    printf("\nMatricula: %d", matricula);
    printf("\nConceito %c", conceito_final);

    return 0;

}
    









#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 

 {
    srand(1);
    int faces, resultado;
    printf("--- Simulador de Dados RPG ---\n");
    printf("Quantas faces tem o dado que você quer rolar? ");
    scanf("%d", &faces);
    resultado = rand()%faces + 1;
    printf("Resultado do dado: %d\n",resultado );

    return 0;

}




    

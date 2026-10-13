#include <stdio.h>
int main()
{
    float nota1, nota2, media;
    while(1){
        printf("Digite as notas do aluno: ");
        scanf("%f %f", &nota1,&nota2); 
            if(nota1 < 0 || nota2 < 0) {
                break;
            }
            media = (nota1 + nota2) / 2;
            printf("\nA média das notas é %.1f\n\n", media);
    }
}
        
    


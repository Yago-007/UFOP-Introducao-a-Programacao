#include <stdio.h>
char sexo;
int idade, contribuicao;
int pontos;
int main()
{
    printf("Digite o sexo: ");
    scanf("%c", &sexo);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o tempo de contribuição para o INSS: ");
    scanf("%d", &contribuicao);
    pontos = idade + contribuicao;
        if (sexo == 'M'){
            if ((idade >= 65 && contribuicao >= 35) || pontos >= 100){
                printf("Você pode se aposentar com salário integral");
            }else{
                printf("Você não pode se aposentar com salário integral");
            }
             }else{
                 if ((idade >= 60  && contribuicao >= 30) || pontos >= 90){
                    printf("Você pode se aposentar com salário integral");
                }else{
                    printf("Você não pode se aposentar com salário integral");
                 
                }
             }

return 0;

}













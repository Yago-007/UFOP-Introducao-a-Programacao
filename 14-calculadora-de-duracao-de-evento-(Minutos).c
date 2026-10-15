#include <stdio.h>
int calculaMinutos(int hora_inicial, int minuto_inicial, int hora_final, int minuto_final)
{
    int duracao;
    duracao = ( hora_final - hora_inicial) * 60 + minuto_final - minuto_inicial;
    if(duracao < 0){
        duracao = duracao + 24 * 60;
    }
    return duracao;
}
int main()
{
    int hora_ini, minuto_ini, hora_fin, minuto_fin, duracao;
   
    printf("Entre com o horário de início: ");	
    scanf("%d %d", &hora_ini, &minuto_ini);
    printf("Entre com o horário de término: ");
    scanf("%d %d", &hora_fin, &minuto_fin);

    duracao = calculaMinutos(hora_ini, minuto_ini, hora_fin, minuto_fin);

    printf("Duração: %d minutos", duracao);

return 0;
}




    
    
 



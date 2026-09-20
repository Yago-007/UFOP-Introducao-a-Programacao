#include <stdio.h>

int main()

{ 
    int horas, minutos, segundos, Total;
    printf("Digite a hora, minutos e segundos: ");
    scanf("%d %d %d", &horas, &minutos, &segundos);
    
    Total = horas*60*60 + minutos*60 + segundos;
    printf("Total = %d", Total);

    return 0;
}

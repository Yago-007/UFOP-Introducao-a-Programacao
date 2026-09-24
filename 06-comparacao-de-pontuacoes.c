#include <stdio.h>
int main()

{
    int a,b;
    printf("Digite as duas pontuações: ");
    scanf("%d%d", &a, &b);
    
    if(a > b) {
        printf("\nA pontuação %d é maior e %d a menor.\n", a, b );
    }
    else{printf("\nA pontuação %d é maior e %d a menor.\n", b, a );}

    
    return 0;

}   


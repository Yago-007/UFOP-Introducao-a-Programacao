#include <stdio.h>
#include <math.h>
int calculaRaizes(float a, float b, float c, float *xa, float *xb)
{
    float delta = pow(b, 2) - 4 * a*c;
    
    if(delta < 0){
        return 0;
    }else{ 
        *xa = (-b + sqrt(delta)) / (2 * a);
        *xb = (-b - sqrt(delta)) / (2 * a);
        return 1;  
        }
}
int main()
{
    float a, b, c, xa, xb;
    printf("Digite os valores de a, b , c:\n\n ");
    scanf("%f %f %f", &a, &b, &c);
   
    int deucerto = calculaRaizes(a, b, c, &xa, &xb);
    
    if(deucerto == 1){
        printf("\nxa = %.2f \n", xa);
        printf("\nxb = %.2f\n", xb);
    }else{
        printf("\nNão foi possível calcular as raízes!");
    }
    
return 0;
}
    
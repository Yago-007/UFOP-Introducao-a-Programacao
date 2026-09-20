#include <stdio.h>
#include <math.h>

int main()

{
    float x1, x2, x3, y;
    printf("Entre com os valores de x1, x2 e x3: ");
    scanf("%f %f %f", &x1, &x2, &x3);
   
    y = pow(x1 + pow(x2, 2) + pow(x3, 2),2) - pow((x1 * x2 * x3), 2);
    printf("y = %.2f", y);
}
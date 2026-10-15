#include <stdio.h>
void calculaRetangulo(float base, float altura, float *area, float *perimetro)
{
    *area = base * altura;
    *perimetro = (altura + base) * 2;
}
int main()
{
    float base, altura, area, perimetro;
    printf("Digite as medidas: ");
    scanf("%f %f", &base, &altura);

calculaRetangulo(base, altura, &area, &perimetro);

    printf("\nA área do retângulo é: %.2f", area);
    printf("\n\nO perímetro do retângulo é: %.2f", perimetro);

return 0;
}

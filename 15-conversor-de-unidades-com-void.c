#include <stdio.h>
void converterCelsius(float celsius, float *fahrenheit, float *kelvin)
{
    *fahrenheit = celsius * 9/5 + 32;
    *kelvin =  celsius + 273.15;
}
int main()
{
    float celsius, fahrenheit, kelvin;
    printf("Digite o valor em Celsius: ");
    scanf("%f", &celsius);

    converterCelsius(celsius, &fahrenheit, &kelvin);

    printf("\nFahrenheit: %.2f\n\n",fahrenheit);
    printf("Kelvin: %.2f", kelvin);

return 0;
}

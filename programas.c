#include <stdio.h>

int main()
{ 
 
 float Celsius, Fahrenheit, Kelvin;
 
 printf("Entre com o valor em graus Celsius: ");
 scanf("%f", &Celsius);
 
 Fahrenheit = (9.0/5.0) * Celsius + 32;
 Kelvin = Celsius + 273.15 ;
 
 printf ("Celsius: c = %.2f\n", Celsius);
 printf ("Fahrenheit: f = %.2f\n", Fahrenheit);
 printf ("Kelvin: k = %.2f\n", Kelvin);

 return 0;
}


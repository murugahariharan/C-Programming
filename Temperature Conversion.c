#include <stdio.h>

void main()
{
    float celsius, fahrenheit;

    printf("Enter the temperature in celcius :");
    scanf("%f", &celsius);


    fahrenheit = 9.0 / 5 * celsius + 32;

    printf("Temperature in fahrenheit : %0.2f", fahrenheit);


}



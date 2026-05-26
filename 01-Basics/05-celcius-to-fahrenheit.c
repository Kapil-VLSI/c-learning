#include<stdio.h>
int main()
{
    float celcius;
    printf("enter the temperature in degree celcius \n");
    scanf("%f", & celcius);
float farenheit = (celcius*1.8) + 32;
printf("the temperature in farenheit is %f ", farenheit);
return 0;
}

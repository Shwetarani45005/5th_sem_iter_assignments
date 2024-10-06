#include <stdio.h>

double calc_celsius(double depth);
double calc_fahrenheit(double c);
int main(void){

int depth;
printf("Enter the depth ");
scanf("%d",&depth);

double c = calc_celsius(depth);
printf("The Temperature in Celcius is %f \n",c);

double f = calc_fahrenheit(c);
printf("The Temperature in Fahrenheit is %f \n",f);
}

double calc_celsius(double depth)
{
double c=10*depth + 20;
return c;
}

double calc_fahrenheit(double c)
{
double f=1.8*c+32;
return f;
}

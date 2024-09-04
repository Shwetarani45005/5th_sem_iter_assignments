#include <stdio.h>

int main(void){
//input speed (Km/h),distance(meters)
double speed;
printf("Input the speed of the plane in km/h ");
scanf("%lf",&speed);

double dist;
printf("Input the distance of the plane in meters ");
scanf("%lf",&dist);

dist = dist/1000;

//calculate acceleration=a,time=t
double t=dist/speed; // in hours
printf("The time in hours %f",t);

t = t*60*60; // in seconds
speed = speed * (5/18);

double a=speed/t;
printf("Acceleration %f",a);

    return 0;
}

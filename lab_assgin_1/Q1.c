#include <stdio.h>

int main(void){

    int height;
    double flow;
    printf("Enter the height ");
    scanf("%d",&height);
    printf("Enter the water flow ");
    scanf("%lf",&flow);

    int mass = 1000*flow;
    double g = 9.8;

    double work = mass*g*height;

   printf("Predict how many megawatts of power will be produced if 90 percentage of the work done on the water by gravity is converted to electrical energy.");


    double per_work=0.9*work;
    double mw=per_work/1000000;

    printf("Answer %f",mw);
    printf("\n");

}
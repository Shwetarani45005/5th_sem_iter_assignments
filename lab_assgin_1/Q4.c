#include <stdio.h>
#include <math.h>

int main(void){
 double carprice;
 int down_payments;
 printf("Enter purchase price of the car and the down payment of the car? ");
 scanf("%lf %lf",&carprice,&down_payments);


 double annual_ir;
 printf("Enter the Annual Interest Rate ");
 scanf("%lf",&annual_ir);

 int total_payments;
 printf("Enter the total numbers Payments ");
 scanf("%d",&total_payments);

 double monthly_ir=annual_ir/1200.0;
 double principal = carprice-down_payments;

 double monthly_pay=(monthly_ir*principal)/(1-pow(1 + monthly_ir, -total_payments));

 printf("The amount borrowed %f and the monthly payment %.2f \n",principal,monthly_pay);


    return 0;
}

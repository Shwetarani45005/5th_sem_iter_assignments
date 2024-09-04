#include <stdio.h>

#define rate 0.35

int main(void)
{
    double x;
    double y;
    printf("MILEAGE REIMBURSEMENT CALCULATOR\n");
    printf("Enter beginning odometer reading=> ");
    scanf("%lf", &x);
    printf("Enter ending odometer reading=> ");
    scanf("%lf", &y);
    double diff=y-x;
    double total = diff*rate;
    printf("You traveled %.2f miles.At $0.35 per mile,your reimbursement is %.2f. \n", diff, total);
    return 0;
}

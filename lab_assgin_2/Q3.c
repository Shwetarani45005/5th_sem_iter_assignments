/*
PROBLEM: Emission check based on pollutant type and odometer reading.
ANALYSIS: To solve this problem, we need to collect data from the user including the pollutant number, grams of emission per mile, and the odometer reading in miles. The program will determine whether the emissions exceed the permitted levels based on the type of pollutant and the vehicle's odometer reading.
DATA REQUIREMENTS:
Problem Inputs:
int pno;    // Pollutant number (1 to 4)
double em;  // Grams emitted per mile
int dist;   // Odometer reading in miles
Problem Outputs:
Conditionally prints whether the emissions exceed the permitted level.
DESIGN:
INITIAL ALGORITHM:
// Step 1: Display pollutant types.
// Step 2: Read the pollutant number from the user.
// Step 3: Read the emission per mile (in grams) from the user.
// Step 4: Read the odometer reading (in miles) from the user.
// Step 5: Use a switch statement to check the pollutant type.
// Step 6: Use if-else statements to determine if emissions exceed the permitted level, based on the pollutant type and odometer reading.
// Step 7: Display the results accordingly.
IMPLEMENTATION:
*/

#include <stdio.h>

int main(void){
    // Step 1: Display pollutant types
    printf("(1) Carbon monoxide \n");
    printf("(2) Hydrocarbons \n");
    printf("(3) Nitrogen oxides \n");
    printf("(4) Nonmethane hydrocarbons \n");

    int pno;  // Pollutant number
    printf("Enter pollutant number: ");
    // Step 2: Read pollutant number
    scanf("%d", &pno);

    double em;  // Grams emitted per mile
    printf("\nEnter number of grams emitted per mile: ");
    // Step 3: Read grams emitted per mile
    scanf("%lf", &em);

    int dist;  // Odometer reading
    printf("\nEnter odometer reading: ");
    // Step 4: Read odometer reading
    scanf("%d", &dist);

    // Step 5: Use switch to determine pollutant type
    switch(pno){
        case 1:  // Carbon monoxide
            if(dist <= 50000 && em > 3.4){
                printf(" Emissions exceed permitted level of 3.4 grams/mile.");
            }
            else if(dist > 50000 && em > 4.2){
                printf(" Emissions exceed permitted level of 4.2 grams/mile.");
            }
            else{
                printf("Emissions within the limit.");
            }
            break;

        case 2:  // Hydrocarbons
            if(dist <= 50000 && em > 0.31){
                printf(" Emissions exceed permitted level of 0.31 grams/mile.");
            }
            else if(dist > 50000 && em > 0.39){
                printf(" Emissions exceed permitted level of 0.39 grams/mile.");
            }
            else{
                printf("Emissions within the limit.");
            }
            break;

        case 3:  // Nitrogen oxides
            if(dist <= 50000 && em > 0.4){
                printf(" Emissions exceed permitted level of 0.4 grams/mile.");
            }
            else if(dist > 50000 && em > 0.5){
                printf(" Emissions exceed permitted level of 0.5 grams/mile.");
            }
            else{
                printf("Emissions within the limit.");
            }
            break;

        case 4:  // Nonmethane hydrocarbons
            if(dist <= 50000 && em > 0.25){
                printf(" Emissions exceed permitted level of 0.25 grams/mile.");
            }
            else if(dist > 50000 && em > 0.31){
                printf(" Emissions exceed permitted level of 0.31 grams/mile.");
            }
            else{
                printf("Emissions within the limit.");
            }
            break;
    }
    return 0;
}

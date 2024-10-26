/*  
PROBLEM: Baking Time Calculation for a Bread Machine. 
ANALYSIS: To solve this problem, we need to get the type of bread, loaf size, and whether 
the baking is manual. Based on the input, calculate the total baking time. 
DATA REQUIREMENTS: 
Problem Inputs: 
char bread;  
int size;  
char manual;  
Problem Outputs: 
double bakingtime;  
double baking; 
DESIGN: 
INITIAL ALGORITHM: 
Step1. Display the input options to the user (bread type, size, and baking type). 
Step2. Read the user inputs for bread type, size, and baking type. 
Step3. If bread type is 'W', check if loaf size is double, and calculate the initial baking 
time. Add additional time if the baking is manual. 
Step4. If bread type is 'S', check if loaf size is double, and calculate the initial baking 
time. Add additional time if the baking is manual. 
Step5. Display the total calculated baking time.
IMPLEMENTATION: 
*/ 

#include <stdio.h>

void display() { 
    // Step1: Display input options 
    printf("Enter the type of bread as 'W' for white and 'S' for sweet\n");
    printf("Enter the loaf size as 1 for double, 0 for regular\n");
    printf("Enter if the baking is manual (y/n)\n");
}

int main(void) {
    char bread, manual; // To store the type of bread and baking mode
    int size;           // To store the loaf size

    display();          // Call the display function

    // Step2: Read the user input
    scanf(" %c %d %c", &bread, &size, &manual); 

    double baking;      // To store the base baking time
    double bakingtime;  // To store the total baking time

    // Step3-4: Determine baking time based on bread type, size, and manual option
    if (bread == 'W' || bread == 'w') {      // For white bread
        if (size == 1) {                     // If loaf size is double
            baking = 45 + 45 * 0.5;          // Baking time is 1.5 times base
        } else {
            baking = 45;                     // Regular size
        }
        if (manual == 'y') {                 // If manual baking
            bakingtime = 15 + 60 + 18 + 20 + 0.0334 + 75 + baking + 30;
        } else {
            bakingtime = 15 + 60 + 18 + 20 + 0.0334; // Auto-baking time
        }
    } 
    else {                                   // For sweet bread (Step4)
        if (size == 1) {
            baking = 35 + 35 * 0.5;
        } else {
            baking = 35;
        }
        if (manual == 'y') {
            bakingtime = 20 + 60 + 33 + 30 + 0.0334 + 75 + baking + 30;
        } else {
            bakingtime = 20 + 60 + 33 + 30 + 0.0334;
        }
    }

    // Step5: Display the calculated baking time
    printf("The baking time is %.2f minutes\n", bakingtime);

    return 0;
}

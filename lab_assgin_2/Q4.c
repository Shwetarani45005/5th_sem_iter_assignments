/*  
PROBLEM: Day Number Calculation in a Year.  
ANALYSIS: To solve this problem, we need to get the month, day, and year as input data. Based 
on the date, the program calculates the day number of the year, considering whether the year 
is a leap year or not.  
DATA REQUIREMENTS:  
Problem Inputs:  
int month;  
int day;  
int year;  
Problem Outputs:  
int day_number;  
DESIGN:  
INITIAL ALGORITHM:  
// To store the month, day, and year entered by the user.  
// To store the day number of the year.  
// To check if the year is a leap year.  
Step1. Read the month, day, and year as input data.  
Step2. Call the `leap` function to check if the year is a leap year.  
Step3. Calculate the day number based on the month and day entered, accounting for whether  
it is a leap year or not.  
Step4. Display the calculated day number.  
IMPLEMENTATION:  
*/ 

#include <stdio.h>

int leap(int year) {
    // Step2: Function to check if the year is a leap year
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        return 1; // Year is a leap year
    }
    return 0; // Year is not a leap year
}

int main(void) {
    int month, day, year; // Step1: Input variables
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_number = 0;

    // Step1: Reading month, day, and year from the user
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter year: ");
    scanf("%d", &year);

    // Step3: Adjust February days for leap year
    if (leap(year)) {
        days_in_month[1] = 29;
    }

    // Step3: Calculate day number
    for (int i = 0; i < month - 1; i++) {
        day_number += days_in_month[i];
    }
    day_number += day;

    // Step4: Display result
    printf("Day number: %d\n", day_number);

    return 0;
}

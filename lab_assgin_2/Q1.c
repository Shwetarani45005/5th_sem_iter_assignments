/*  
PROBLEM: Compass Heading to Bearing Conversion.
ANALYSIS: To solve this problem, we need to get the compass heading input from the user.
Based on the compass heading, we need to calculate the initial direction (N or S), the 
turning direction (E or W), and the angle between the heading and the nearest cardinal 
direction. 
DATA REQUIREMENTS: 
Problem Inputs: 
double com_head;  
Problem Outputs: 
double angle;  
char initial_dir, turn_dir; 
DESIGN: 
INITIAL ALGORITHM: 
Step1. Read the compass heading in degrees. 
Step2. Check if the heading lies between 0 and 90 degrees. 
Step3. If yes, set initial direction to 'N', calculate the angle as the heading, and set 
turn direction to 'E'. 
Step4. If heading lies between 90 and 180 degrees, set initial direction to 'S', calculate 
the angle by subtracting the heading from 180, and set turn direction to 'E'. 
Step5. If heading lies between 180 and 270 degrees, set initial direction to 'S', calculate 
the angle by subtracting 180 from the heading, and set turn direction to 'W'. 
Step6. If heading lies between 270 and 360 degrees, set initial direction to 'N', calculate 
the angle by subtracting the heading from 360, and set turn direction to 'W'. 
Step7. Display the calculated bearing.
IMPLEMENTATION: 
*/ 

#include <stdio.h>

int main(void) {
    double com_head; // Step1
    printf("Enter the value of compass heading: ");
    scanf("%lf", &com_head);

    double angle;
    char initial_dir, turn_dir;

    // Step2-6
    if (com_head >= 0 && com_head <= 90) {
        initial_dir = 'N';       // Step3
        angle = com_head;
        turn_dir = 'E';
    } 
    else if (com_head > 90 && com_head <= 180) {
        initial_dir = 'S';       // Step4
        angle = 180 - com_head;
        turn_dir = 'E';
    } 
    else if (com_head > 180 && com_head <= 270) {
        initial_dir = 'S';       // Step5
        angle = com_head - 180;
        turn_dir = 'W';
    } 
    else {
        initial_dir = 'N';       // Step6
        angle = 360 - com_head;
        turn_dir = 'W';
    }

    // Step7
    printf("Bearing: %c %.lf degrees %c\n", initial_dir, angle, turn_dir);

    return 0;
}

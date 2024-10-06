#include <stdio.h>

// Function to display instructions to the user
void display_instructions() {
    printf("CYCLIST DECELERATION CALCULATOR\n");
    printf("This program calculates the constant rate of acceleration of a cyclist slowing down.\n");
    printf("It also calculates how long the cyclist will take to come to rest given the initial speed.\n\n");
}

// Function to calculate the acceleration
double calculate_acceleration(double initial_velocity, double final_velocity, double time_interval) {
    return (final_velocity - initial_velocity) / time_interval;
}

// Main program
int main() {
    // Declare variables
    double initial_velocity, final_velocity, time_interval, acceleration, time_to_rest;

    // Call the function to display instructions
    display_instructions();

    // Step 1: Assign values for initial velocity, final velocity, and time interval
    initial_velocity = 10.0;  // in mi/hr
    final_velocity = 2.5;     // in mi/hr
    time_interval = 1.0 / 60.0;  // 1 minute converted to hours

    // Step 2: Calculate the acceleration using the calculate_acceleration function
    acceleration = calculate_acceleration(initial_velocity, final_velocity, time_interval);

    // Step 3: Calculate the time to come to rest (final velocity = 0)
    time_to_rest = -initial_velocity / acceleration;

    // Step 4: Display the acceleration and time to rest
    printf("The constant rate of acceleration: %.2f mi/hr²\n", acceleration);
    printf("Time to come to rest: %.2f seconds\n", time_to_rest * 3600);  // Convert time to seconds

    return 0;
}

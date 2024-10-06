#include <stdio.h>

int main(void){

int total_population;
printf("Enter the countrys population ");
scanf("%d",&total_population);

 //2 liters per flush.
 int new_flush=2;
//there is about 1 toilet for every 3 persons
int toilet = 3;
//that existing toilets use an average of 15 liters per flush
int old_flush=15;
//that a toilet is flushed on average 14 times per day
int avg_flush_in_day=14;
//the cost to install each new toilet is $150
int cost=150;

int old_magnitude=old_flush*avg_flush_in_day;
int new_magnitude=new_flush*avg_flush_in_day;

// water saved in litres
int water_saved=old_magnitude-new_magnitude;

double total_water_saved=water_saved*(total_population/3);
printf("Total Water Saved %f \n",total_water_saved);

double total_cost=150*(total_population/3);
printf("Total Cost %f \n",total_cost);

return 0;
}

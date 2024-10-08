#include <stdio.h>

int main(void){
    double com_head;

    printf("Enter the value of compass heading: ");
    scanf("%lf",&com_head);

    double angle;
    char initial_dir,turn_dir;

    if(com_head>=0 && com_head<=90){
        initial_dir = 'N';
        angle = com_head;
        turn_dir = 'E';
    }
    else if(com_head>90 && com_head<=180){
        initial_dir = 'S';
        angle = 180-com_head;
        turn_dir = 'E';
    }
    else if(com_head>90 && com_head<=180){
        initial_dir = 'S';
        angle = com_head-180;
        turn_dir = 'W';
    }
    else{
        initial_dir = 'N';
        angle = 360-com_head;
        turn_dir = 'W';
    }
    printf("Bearing: %c %.lf degrees %c \n",initial_dir,angle,turn_dir);

    return 0;
}

// WAP to convert given second into its equivalent hour, minute and second as per the following format.
#include<stdio.h>
int main(void){
    int sec;
    printf("Enter no of seconds :");
    scanf("%d",&sec);
    int hour,minute,secs;
    hour=sec/3600; //calculate no of hours
    minute=(sec%3600)/60; //calculate no of minutes
    secs=(sec%3600)%60; //calculate remaining seconds
    printf("%d seconds equals %d hours %d minutes and %d seconds.",sec,hour,minute,secs);
}
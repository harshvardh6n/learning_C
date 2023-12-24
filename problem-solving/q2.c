// WAP to convert a distance in 
// meter entered through keyboard 
// into its equivalent kilometer and 
// meter as per the following format.

#include<stdio.h>
int main(void){
    int m,km,M;
    printf("Enter distance in meter:");
    scanf("%d",&m);
    km=m/1000;
    M%=1000;
    printf("%d meters equals %d km and %d m",m,km,M);
    return 0;
}
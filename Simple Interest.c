#include<stdio.h>
int main(){
    //Declare variables
    float principal,rate,time,interest;
    
    printf("enter the principal amount:");
    scanf("%f",& principal);
    
    printf("enter the rate of interest:");
    scanf("%f",& rate);
    
    printf("enter the time in years:");
    scanf("%f", time);
    
    //formula of calculating simple interest
    interest = (principal * rate * time)/100;
    
    printf("the simple interest is: %.2f\n", interest);
    return 0;
}
#include<stdio.h>
#include<math.h>
int main(){
	double principal,rate,time,n,CI,A;
	
	printf("enter the principal amount:");
	scanf("%lf",& principal);
	
	printf("enter the annual interest rate:");
	scanf("%lf",& rate);
	
	printf("enter the time in years:");
	scanf("%lf",& time);
	
	printf("enter the number of time interest is compounded annually:");
	scanf("%lf",& n);
	
	//calculate the final amount after 't' with compound interest
	A=principal*((1+rate/n),n*time);
	//calculate the compound interest by subtracting the principal from final amount
	CI=A-principal;
	
	printf("the compound interest is:%.2lf\n", CI);
	return 0;
}

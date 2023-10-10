/*
Programmer : Rao Ghulam Mohi Uddin
Desp : Lab 7 
Date : 10/10/2023
*/

# include <stdio.h>

void main(){
	int divisor=0;
	int dividend=0;
	
	printf("Input the divisor and dividend: ");
	scanf("%d %d",&divisor,&dividend);
	
	if(divisor==0){
		printf("Divide by zero is mathematically invalid!");
	}
	else{
		int quotient=0;
		int remainder=0;
		
		while(dividend>=divisor){
			dividend-=divisor;
			quotient++;
		}
		printf("Quotient = %d\n",quotient);
		printf("Remainder = %d\n",dividend);
	}
}

/*
Programmer: Rao Ghulam Mohi Uddin
Description: Swaping two number
Date: 24/10/2023
*/

# include <stdio.h>

int swapIntegers(int a, int b); // declare function


int main(){
	int a;
	int b;
	printf("Enter the value of a and b: ");
	scanf("%d %d",&a,&b);
	
	swapIntegers(a,b); // call function
	
	
}// end main

int swapIntegers(int a, int b){ // define function
	int temp=0;
	temp=b;
	b=a;
	a=temp;
	printf("a=%d and b=%d",a,b);
}// end swapIntegers

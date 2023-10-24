/*
Programmer: Rao Ghulam Mohi Uddin
Description: Basic airthmetic operation
Date: 24/10/2023
*/

# include <stdio.h>

int calculator(int a, char b, int c); // declare function


int main(){
	int a;
	char b;
	int c;
	
	printf("Enter the mathematical expression: ");
	scanf("%d %c %d",&a,&b,&c);
	calculator(a,b,c); // call function
}// end main


int calculator(int a, char b, int c){ // define function
	switch(b){
		case'+':
			printf("Answer = %d",a+c);
			break;
		case'-':
			printf("Answer = %d",a-c);
			break;
		case'*':
			printf("Answer = %d",a*c);
			break;
		case'/':
			printf("Answer = %d",a/c);
			break;
		default:
			printf("Error");
	}
}//end calculator

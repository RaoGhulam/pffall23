/*
Programmer : Rao GHulam Mohi Uddin
Disc : Lab 7, Q3
Date : 10/10/2023
*/



# include <stdio.h>

void main() {
		int number;
		int sum=0;
		int digit;

		printf("Input number: ");
		scanf("%d", &number);

		while(number>0) {
				digit=number%10;
				sum=sum+digit;
				number=(number - digit)/10;
		}

		printf("The sum of digits = %d",sum);


}
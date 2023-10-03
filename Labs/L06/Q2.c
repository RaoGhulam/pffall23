/*
Programmer: Rao Ghulam Mohi Uddin
Dec: Lab-6, Q1
Date: 3/10/2023
*/

# include <stdio.h>

int main(){
	int a=0;
	int b=1;
	int temp=0;
	int sum=0;
	
	while(a<10000){
		printf("%d\n",a);
		temp=b;
		b=b+a;
		a=temp;
		if ((a%3==0) || (a%5==0) || (a%7 ==0)){
			sum = sum + a;
			}
		}
	printf("Sum = %d",sum);
	
	return 0;
}

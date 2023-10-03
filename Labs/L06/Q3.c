/*
Programmer: Rao Ghulam Mohi Uddin
Dec: Lab-6, Q1
Date: 3/10/2023
*/

# include <stdio.h>

int main(){
	int num1=0;
	int num2=0;
	int LCM=0;
	int GCD=0;
	
	printf("Input first and second number: ");
	scanf("%d %d",&num1, &num2);
	
	if(num1>num2){
		LCM=num1;
		GCD=num2;
	}
	else{
		LCM=num2;
		GCD=num1;
	}
	
	while(1){
		if ((LCM%num1==0) && (LCM%num2==0)){
			printf("LCM = %d\n",LCM);
			break;
		}
		LCM++;
	}
	GCD=(num1*num2)/LCM;
	printf("GCD = %d",GCD);
	return 0;
	
}

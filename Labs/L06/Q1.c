/*
Programmer: Rao Ghulam Mohi Uddin
Dec: Lab-6, Q1
Date: 3/10/2023
*/

# include <stdio.h>
# include <math.h>

int main(){
	int n;
	double sqrtOfNum;
	
	
	printf("Input the number n: ");
	scanf("%d",&n);
	
	sqrtOfNum=sqrt(n);
	
	if (sqrtOfNum==(int)sqrtOfNum){
		printf("%d is a perfect number.",n);
	}		
	else{
		printf("%d is not a perfect number.",n);
	}
	return 0;
}

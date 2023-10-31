/*
Programmer: Rao Ghulam Mohi Uddin
Description: Recursion to find factorial
Date: 31/10/23
*/

# include <stdio.h>

int factorial(int n);

int main(){
	int n;
	scanf("%d",&n);
	int F= factorial(n);
	printf("%d",F);
	
}

int factorial(int n){
	if(n==0){
		return 1;
	}
	
	return n*factorial(n-1);
	
}

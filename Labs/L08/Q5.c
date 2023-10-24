/*
Programmer: Rao Ghulam Mohi Uddin
Description: Basic airthmetic operation
Date: 24/10/2023
*/

int decideCarUsage(int a, int b);

int main(){
	int a;
	int b;
	printf("Enter the numeric part of car's number: ");
	scanf("%d",&a);
	printf("Enter the day: ");
	scanf("%d",&b);
	
	decideCarUsage(a,b);
	
}//end main

int decideCarUsage(int a, int b){
	if(a%2==0){
		if(b%2==0){
			return 1;
		}
		else{
			return 0;
		}
	}
	else{
		if(b%2==0){
			return 0;
		}
		else{
			return 1;
		}
	}
}

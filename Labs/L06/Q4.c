/*
Programmer: Rao Ghulam Mohi Uddin
Dec: Lab-6, Q1
Date: 3/10/2023
*/

# include <stdio.h>

int main(){
	
	int a=0;
	int b=0;
	
	printf("Input first and second number: ");
	scanf("%d %d",&a, &b);
	
	while(a<=b){
		
		switch(a){
			case 0:
				printf("Zero\n");
				break;
			case 1:
				printf("One\n");
				break;
			case 2:
				printf("Two\n");
				break;
			case 3:
				printf("Three\n");
				break;
			case 4:
				printf("Four\n");
				break;
			case 5:
				printf("Five\n");
				break;
			case 6:
				printf("Six\n");
				break;
			case 7:
				printf("Seven\n");
				break;
			case 8:
				printf("Eight\n");
				break;
			case 9:
				printf("Nine\n");
				break;
			default:
				if(a%2==0){
					printf("Even\n");
				}
				else{
					printf("Odd\n");
				}
		}
		a++;
	}
}
	

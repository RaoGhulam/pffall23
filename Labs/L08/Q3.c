/*
Programmer: Rao Ghulam Mohi Uddin
Description: C program that reads a text input from the user and searches for a specific character
Date: 24/10/2023
*/

# include <stdio.h>
int main(){
	char str[100];
	printf("Input string: ");
	scanf("%s",&str);
	int count=0;
	int i;
	for(i=0; i<100; i++){
		if(str[i] == 'a'){
			count++;
		}
	}
	printf("%d",count);
	
}

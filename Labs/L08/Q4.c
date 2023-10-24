/*
Programmer: Rao Ghulam Mohi Uddin
Description: Basic airthmetic operation
Date: 24/10/2023
*/

# include <stdio.h>
# include <string.h>

int main(){
	char password[50];
	char stored_password[]="Secure123";
	
	printf("Enter the password: ");
	scanf("%s",&password);
	
	if(strlen(password)<8){
		printf("Password cannot be less than 8 characters.");
		return 0;
	}
	if(strcmp(password, stored_password)==0){
		printf("Login Successful.");
	}
	else{
		printf("Login failed. Incorrect password.");
	}
}

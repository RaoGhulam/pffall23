# include <stdio.h>

void main() {
		char character;

		printf("Enter the character: ");
		scanf("%ch", &character);

		if (character>='A' && character<='Z') {
		   printf("%c is a capital alphabet", character);
		}
		else if (character>='a' && character<='z') {
		   printf("%c is a small alphabet", character);
		}
		else if (character>='0' && character<='9') {
		   printf("%c is a digit", character);
		}
		else {
		   printf("%c is a special character", character);
		}
}
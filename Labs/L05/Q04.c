# include <stdio.h>

void main() {
		float Num1=0;
		float Num2=0;
		char operator;
		float result=0;

		printf("Enter the first number: ");
		scanf("%f", &Num1);

		printf("Enter (+,-,*,/): ");
		scanf(" %c", &operator);

		printf("Enter the second number: ");
		scanf("%f", &Num2);


		switch(operator) {
					case'+':
						result=Num1+Num2;

					break;
					case'-':
						result=Num1-Num2;

					break;
					case'*':
						result=Num1*Num2;

					break;
					case'/':
						result=Num1/Num2;

					break;
					default:
						printf("Error");
				}
		printf("Answer = %f", result);


} // end main

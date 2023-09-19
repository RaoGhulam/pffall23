# include <stdio.h>
# include <math.h>

int main() {
		int num=0;

		printf("Enter the number: ");
		scanf("%d", &num);

		if (num%3==0) {
				printf("%d is a multiple of 3.", num);
		}
		else {
			printf("%d is not a multiple of 3.", num);
		}

} //end main
# include <stdio.h>

int main() {
		int n=0;
		printf("Enter the number of integers: ");
		scanf("%d",&n);

		int num;
		int sum_of_sqr=0;
		int count=0;
		while(count<n) {
				printf("Enter the integer %d: ",count+1);
				scanf("%d",&num);
				sum_of_sqr = sum_of_sqr + (num * num);
				count++;
		}
		printf("Sum of sqr: %d\n", sum_of_sqr);
		return 0;
}


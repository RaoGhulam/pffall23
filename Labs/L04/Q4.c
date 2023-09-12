# include <stdio.h>
# include <math.h>

int main() {
		int a=0;
		int b=0;
		int c=0;
		float discriminant=0;
		float root1,root2;

		printf("Input the values of (a, b, c): ");
		scanf("%d %d %d", &a, &b, &c);
		discriminant = b * b - 4 * a * c;
		if (discriminant == 0) {
					root1= -b / (2 * a);
					printf("One real root is: %f", root1);
		}
		else if (discriminant > 0) {
						root1 = (-b + sqrt(discriminant)) / (2*a);
						root2 = (-b - sqrt(discriminant)) / (2*a);
						printf("One real root is: %f, and second real root is: %f", root1, root2);
		}
		else {
			printf("No real root");
		}
		return 0;
}
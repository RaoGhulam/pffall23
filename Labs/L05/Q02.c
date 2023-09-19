# include <stdio.h>

void main() {

		int time=0;

		printf("Enter the time in hour: ");
		scanf("%d",&time);

		if ( time>=5 && time<=11) {
						printf("Good Morning");
		}
		else if (time>11 && time<=18) {
						printf("Good Evening");
		}
		else if (time>18 && time<=23) {
						printf("Good Night");
		}
		else {
			printf("Error");
		}
} // end main
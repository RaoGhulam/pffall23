# include <stdio.h>

int main() {
		int day1, month1, year1;
		int day2, month2, year2;
		printf("Enter the date of birth of person 1: ");
		scanf("%d %d %d", &day1, &month1, &year1);


		printf("Enter the date of birth of person 2: ");
		scanf("%d %d %d", &day2, &month2, &year2);

		if (year1<year2) {
					printf("Person 1 is older.\n");
		}
		else if (year2<year1) {
					printf("Person 2 is older.\n");
		}
		else {
        		if (month1 < month2) {
            					printf("Person 1 is older.\n");
			} 
			else if (month1 > month2) {
            						printf("Person 2 is older.\n");
			} 
			else {
            			if (day1 < day2) {
                					printf("Person 1 is older.\n");
				} 
				else if (day1 > day2) {
                					printf("Person 2 is older.\n");
				} 
				else {
                			printf("Both persons are of the same age.\n");
				}
			}
		}
		return 0;
}



# include <stdio.h>

void main() {
		char option;

		printf("Are you sure to delete [Y/y] / [N/n]: ");
		scanf("%c", &option);

		switch(option) {
				case'Y':
				case'y':
					printf("Deleted successfully.");
				break;
				case'N':
				case'n':
					printf("Delete canceled.");
				break;
				default:
					printf("Choose the right option.");
		}
		
} // end main
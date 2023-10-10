/*
Programmer : Rao GHulam Mohi Uddin
Disc : Lab 7, Q4
Date : 10/10/2023
*/



# include <stdio.h>

int main() {
		int matrix[2][2];
		int  i=0;


		printf("Input the elements\n");
		
		while(i<2){
				int j=0;
				while (j<2) {
						scanf("%d",&matrix[i][j]);
						++j;
				}
				++i;
		}

		// checking symmetry

		for(i=0; i<2; ++i){
				for(int j=0; j<2; ++j) {
					if (matrix[i][j] != matrix[j][i]){
						printf("Not symmetric\n");
						return 0;
					}
				}
		}

		printf("Symmetric\n");
}
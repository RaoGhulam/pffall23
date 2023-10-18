/*
Programmer : Rao GHulam Mohi Uddin
Disc : Lab 7, Q4
Date : 17/10/2023
*/

#include <stdio.h>

int main() {
    int matrix[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
	    printf("Input the value: ");
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int symmetric = 1; 

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric) {
            break;
        }
    }

    if (symmetric) {
        printf("Symmetric");
    } 
    else {
        printf("Not symmetric");
    }

    return 0;
}

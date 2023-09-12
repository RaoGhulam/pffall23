/* 
* Programmer: Rao
* Date: 12/9
* Description:
* Related FIles:
*/

//--Include FIles--//
#include <stdio.h>
#include <stdlib.h>
//--Global Variables--//


int main() {
		int i =0;
		int num;

		printf("How many times you want to print *: ") ;
		scanf("%d", &num);

		while(i<num) {
				int j = 0;
				i++;
				while(j<num) {
						j++;
						printf("*");
				}
				printf("\n");
				}
		return 0;
}




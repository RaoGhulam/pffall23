/*
Programmer: Rao Ghulam Mohi Uddin
Description: Pointers to swap numbers
Date: 31/10/23
*/

# include <stdio.h>

void swap(int*a, int*b);

int main(){
	int j=2, k=5;
	printf("j=%d, k=%d\n",j,k);
	swap(&j,&k);
	printf("j=%d, k=%d\n",j,k);
	return 0;
}

void swap(int*a, int*b){
	int temp=*b;
	*b=*a;
	*a=temp;
}

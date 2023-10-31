/*
Programmer: Rao Ghulam Mohi Uddin
Description: Pointers to Reverse array
Date: 31/10/23
*/


# include <stdio.h>

int reverse(int *arr, int size);

int main(){
	int arr[10];
	int size=10;
	int i;
	for( i=0; i<10; i++){
		printf("Input the elements: ");
		scanf("%d",&arr[i]);
	}
	reverse(arr,size);
	
	int j;
	for(j=0; j<10; j++){
		printf("Reverse array: %d\n",arr[j]);
	}


}

int reverse(int *arr, int size){
	int *start=arr;
	int *end=arr+size-1;
	int j;
	for(; start<end; start++, end--){
		int temp=*start;
		*start=*end;
		*end=temp;
	}
	
}

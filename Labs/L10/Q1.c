# include <stdio.h>

void printArray(void *arr, int size, char type);

int main(){
    char  character_arr[3] = {'A', 'B', 'C'};
	int   integer_arr[3] = {1, 2,   3};
	float float_arr[3] = {11.5, 22.5, 33.5};

	printArray((void *)character_arr, 3, 'c');
	printf("\n");
	printArray((void *)integer_arr, 3, 'd');
	printf("\n");
	printArray((void *)float_arr, 3, 'f');
	printf("\n");

}//end main


void printArray(void *arr, int size, char type){
    for(int i=0; i<size; i++){

        if(type=='d'){
            int *int_ptr = (int *)arr;
            printf("%d ", int_ptr[i]);
        }
        else if(type=='c'){
            char *char_ptr = (char *)arr;
            printf("%c ", char_ptr[i]);
        }
        else if(type=='f'){
            float *float_ptr = (float *)arr;
            printf("%f ", float_ptr[i]);
        }
        else{
            printf("Incorrect data type.");
        }
    }
}
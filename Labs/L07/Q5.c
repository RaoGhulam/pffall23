# include <stdio.h>

int main(){
    int arr[50];
    int size;
    int arr2[500]={0};

    printf("Enter the size of array: ");
    scanf("%d",&size);

    if (size>50){
        printf("Size can not be greater than 50.");
    }
  
    for(int i=0; i<size; i++){
        printf("Input the element for the %dth index: ",i);
        scanf("%d",&arr[i]);
    }


    for (int i = 0; i < size; i++) {
        int j = arr[i];             //value at index(i) of array 1 is equal to the index(j) of array 2
        arr2[j] = arr2[j] + 1;  // increment the value at index(j) by 1 
    }

    for (int j=0; j<500; j++){
        if(arr2[j]!=0){
            printf("Frequency of %d = %d\n",j,arr2[j]);
        }
    }

}
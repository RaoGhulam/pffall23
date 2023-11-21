# include <stdio.h>
# include <stdlib.h>

int checkPrime(int num);
void printArray(int **arr, int row, int col);
int **makeArray(int row, int col);
void free_arr(int **arr, int col);

int main(){
    int row = 7, col = 7;
    int **arr = makeArray(row, col);
    printArray(arr, row, col);
    free_arr(arr, col);

    return 0;
}

int checkPrime(int num){
    if (num <= 1){
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

void printArray(int **arr, int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int **makeArray(int row, int col){
    int **arr;
    arr = (int **)malloc(row * sizeof(int *));

    for(int i = 0; i < row; i++){
        arr[i] = (int *)malloc(col * sizeof(int));
    }

    int num = 2;  // Start with the first prime number
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            while (!checkPrime(num)) {
                num++;
            }
            arr[i][j] = num;
            num++;
        }
    } 
    return arr;
}

void free_arr(int **arr, int row){
    for (int i = 0; i < row; i++) free(arr[i]);
    free(arr);
}

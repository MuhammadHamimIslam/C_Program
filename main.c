#include <stdio.h>

void printArray(int rows, int cols, int arr[rows][cols]); // to print array
void takeInput(int rows, int cols, int arr[rows][cols]); // take input of array elements 
void arraySum(int rows, int cols, int sum[rows][cols], int arr1[rows][cols], int arr2[rows][cols]); // find the sum 
void arraySub(int rows, int cols, int sub[rows][cols], int arr1[rows][cols], int arr2[rows][cols]); // find the substraction

int main() {
    int rows, cols;
    printf("Enter the row for matrices: ");
    scanf("%d", &rows);
    
    printf("Enter the column for matrices: ");
    scanf("%d", &cols);
    
    int array1[rows][cols], array2[rows][cols];
    char oprtr;
    
    printf("Enter input for Matrix 1.\n");
    takeInput(rows, cols, array1);
    printArray(rows, cols, array1);
    
    printf("Enter input for Matrix 2.\n");
    takeInput(rows, cols, array2);
    printArray(rows, cols, array2);
    
    printf("Enter the operator: ");
    scanf(" %c", &oprtr);
    
    if (oprtr == '+'){
        int sum[rows][cols];
        arraySum(rows, cols, sum, array1, array2);
        printArray(rows, cols, sum);
    } else if (oprtr == '-'){
        int sub[rows][cols];
        arraySub(rows, cols, sub, array1, array2);
        printArray(rows, cols, sub);
    } else {
        printf("Unknown operator!");
    }
}

void printArray(int rows, int cols, int arr[rows][cols]){
    for (int i = 0; i < rows; i++) {
        for(int j=0;j < cols; j++){
            printf("%d   ", arr[i][j]);
        }
        printf("\n"); 
    }
}

void takeInput(int rows, int cols, int arr[rows][cols]){
    for (int i = 0; i < rows; i++) {
        for(int j=0;j < cols; j++){
            printf("Enter input for Matrix %d×%d: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
}

void arraySum(int rows, int cols, int sum[rows][cols], int arr1[rows][cols], int arr2[rows][cols]){
    for (int i = 0; i < rows; i++) {
        for(int j=0;j < cols; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void arraySub(int rows, int cols, int sub[rows][cols], int arr1[rows][cols], int arr2[rows][cols]){
    for (int i = 0; i < rows; i++) {
        for(int j=0;j < cols; j++){
            sub[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
}
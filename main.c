#include <stdio.h>

void printArray(int arr[3][3]); // to print array
void takeInput(int arr[3][3]); // take input of array elements 
void arraySum(int sum[3][3], int arr1[3][3], int arr2[3][3]); // find the sum 
void arraySub(int sub[3][3], int arr1[3][3], int arr2[3][3]); // find the substraction

int main() {
    int array1[3][3], array2[3][3];
    char oprtr;
    
    printf("Enter input for Matrix 1.");
    takeInput(array1);
    printArray(array1);
    
    printf("Enter input for Matrix 2.");
    takeInput(array2);
    printArray(array2);
    
    printf("Enter the operator: ");
    scanf(" %c", &oprtr);
    
    if (oprtr == '+'){
        int sum[3][3];
        arraySum(sum, array1, array2);
        printArray(sum);
    } else if (oprtr == '-'){
        int sub[3][3];
        arraySub(sub, array1, array2);
        printArray(sub);
    } else {
        printf("Unknown operator!");
    }
}

void printArray(int arr[3][3]){
    for (int i = 0; i < 3; i++) {
        for(int j=0;j < 3; j++){
            printf("%d   ", arr[i][j]);
        }
        printf("\n"); 
    }
}

void takeInput(int arr[3][3]){
    for (int i = 0; i < 3; i++) {
        for(int j=0;j < 3; j++){
            printf("Enter input for Matrix %d×%d: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
}

void arraySum(int sum[3][3], int arr1[3][3], int arr2[3][3]){
    for (int i = 0; i < 3; i++) {
        for(int j=0;j < 3; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void arraySub(int sub[3][3], int arr1[3][3], int arr2[3][3]){
    for (int i = 0; i < 3; i++) {
        for(int j=0;j < 3; j++){
            sub[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
}
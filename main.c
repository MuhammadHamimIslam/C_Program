#include <stdio.h>

int takeInput(int matrix[2][2]);

int main() {
    
   // int mat1[2][2] = {
 //       {1,2},{3,4}
 //   };
  int mat1[2][2];
  int mat2[2][2];
 //   int mat2[2][2] = {
 //       {1,2},{3,4}
 //   };
    printf("Enter the values for matrix 1\n");
    takeInput(mat1);
    printf("Enter the values for matrix 2\n");
    takeInput(mat2);
  
    
   int sumMat[2][2];
   
   for(int i = 0;i < 2;i++){
       for(int j = 0;j < 2;j++){
           int sum = 0;
           sumMat[i][j] = mat1[i][j] - mat2[i][j];
       }
   }
   printf("The result matrix is:\n\n");
   for(int i = 0; i < 2;i++){
       for(int j = 0;j <2;j++){
           printf("%d\t", sumMat[i][j]);
       }
       printf("\n\n");
   }
   
	return 0;
}

int takeInput(int matrix[2][2]) {
      for(int i =0;i<2;i++){
      for(int j=0;j <2;j++){
          printf("Enter value of [%d][%d]:", i,j);
          scanf("%d", &matrix[i][j]);
      }
  }
}

#include<stdio.h>
int main(){
    int rows, cols;
    printf("enter the value of rows: ");
    scanf("%d", &rows);
    printf("enter the value of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("enter the element of the first matrix: ");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
   for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
        if(i > j){
            int temp;
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
   }

   printf("the transpose of the matrix is: \n");
   for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
        printf("%d ", matrix[i][j]);
    }
    printf("\n");
   }

   return 0;
}
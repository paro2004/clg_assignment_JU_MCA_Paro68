#include<stdio.h>
#include<math.h>
int main(){
    int rows, cols;
    printf("enter the value of the rows: ");
    scanf("%d", &rows);
    printf("enter the value of columns: ");
    scanf("%d", &cols);
    int arr[rows][cols];
    printf("enter the element of the matrix: ");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int  squreSum = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            squreSum = squreSum + (arr[i][j] * arr[i][j]);
        }
    }

     double squreRoot = sqrt(squreSum);

    printf("the norm of the matrix is \n: %f", squreRoot);

    return 0;
}
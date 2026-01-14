#include<stdio.h>
int main(){
    int size;
    printf("enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("enter the elements of the array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    //bubble sort; decending order
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if (arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("after the sorting the array elements are: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
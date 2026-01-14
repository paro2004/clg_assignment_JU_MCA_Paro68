#include<stdio.h>
int main(){
    int size;
    printf("enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("enter the elements in the array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int min = 0, max = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] < arr[min]){
            min = i;
        }

        if(arr[i] > arr[max]){
            max = i;
        }
    }

    printf("the minimum element in the array is: %d \n", arr[min]);
    printf("the maximum element in the array is: %d \n", arr[max]);
    
    return 0;
}
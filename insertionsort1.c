#include<stdio.h>

void insertionSort(int arr[], int size){
    for(int i = 1; i < size; i++){
        int current = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > current){
            arr[prev + 1] = arr[prev];
            prev--;          // ei line ta pichone giye check korche je amar prev er left ea kono element ache ki na
        }                      // prev-- mane prev = -1 no index hoye jacche

        arr[prev + 1] = current;   // prev + 1 = 0 no index hoye jacche
    }
}

int main(){
    int size;
    printf("enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("enter the elements in the array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, size);

    printf("after the sorting the array is looking like: \n");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
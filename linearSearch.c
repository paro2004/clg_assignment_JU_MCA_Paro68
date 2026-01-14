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

    int target;
    printf("enter the target element, that you want to search: ");
    scanf("%d", &target);

    // linear search
    int flag = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            printf("we found the element %d at the index %d \n", arr[i], i);
            flag = 1;
            break;
        }
    
    }
    if(flag == 0){
        printf("we can,t find the element in this array!!! \n");
    }

    return 0;

}
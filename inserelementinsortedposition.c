#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n+1];
    printf("enter the sorted array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int new_element;
    printf("enter the element that you want to insert: ");
    scanf("%d", &new_element);

    int i = 0; 
    while(arr[i] < new_element){
        i++;
    }
    for(int j = n; j > i; j--){
        arr[j] = arr[j - 1];
    }
    arr[i] = new_element;

    printf("after the insertion the new array is: ");
    for(int i = 0; i < n+1; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
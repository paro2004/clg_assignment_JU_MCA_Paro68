#include<stdio.h>
int main(){
    int size;
    printf("enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("enter the value of the array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    int temp;
    for(int i = 0; i+ 1 < size; i = i + 2){  /* ei khane amra i+1 < size korlam karon ei khane amader base condition 
                                               check hocche je jokhon last position ea array ta asbe tokhon ki tar pore
                                               ar i+1 no index exist korche(even size er array er khetre kore)....ar ei
                                               problem ta hoy amader jokhon odd size
                                               er array thake*/
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    printf("after changing the position now the array is :");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
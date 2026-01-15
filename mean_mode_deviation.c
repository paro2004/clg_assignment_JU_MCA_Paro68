#include<stdio.h>
#include<math.h>

float mean_func(int arr[], int size){
    float sum = 0.0, mean;
    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    mean = sum / size;

    return mean;
}

float std_deviation_func(int arr[], int size){

    float mean = mean_func(arr, size);
    float std_devi, variance, sum_devi = 0.0;
    for(int i = 0; i < size; i++){
        sum_devi = sum_devi + ((mean - arr[i]) * (mean - arr[i]));
    }
    variance = sum_devi / (size - 1);
    std_devi = sqrt(variance);

    return std_devi;
}

int mode_value_func(int arr[], int size){
        int modeValue ;
    for(int i = 0; i < size; i++){
        int occurance = 0;
        int max_occorance = 0; 
        int max_value = 0;
        
        for(int j = 0; j < size; j++){
            if(arr[j] == arr[i]){
                occurance ++;
            }
        }
        if(arr[max_occorance] < arr[occurance]){
            max_occorance = occurance;
            max_value = arr[i];
        }

        modeValue = arr[i];

    }
    return modeValue;
}

int main(){
    int size;
    printf("enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("enter the elements of the array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    if(size < 2){
        printf("please enter the value which is greater than 1, beacause then deviation can't possible");
    }

  else{
    printf("the mean/average value of the array is: %f \n", mean_func(arr, size));
    printf("the standard deviation value of the array is: %f\n", std_deviation_func(arr, size));
    printf("the mode value of the array is: %d \n", mode_value_func(arr, size));

    }
}
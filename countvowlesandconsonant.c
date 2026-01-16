#include<stdio.h>

int countVowles(char str[]){
    int i ,  vowleCnt = 0 ;
    for(i = 0; str[i]!= '\0'; i++){
        if(i > 0 && str[i - 1] == '\n'){
            i--;
        }
        
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            vowleCnt++;
        }
    }

    return vowleCnt;
}

int countConsonant(char str[]){
    int consCnt = 0;
    for(int i = 0; str[i]!= '\0'; i++){
        if(i > 0 && str[i - 1] == '\n'){
            i--;
        }

        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){

        if(!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'i' || str[i] == 'O' || str[i] == 'U')){
            consCnt++;
        }
    }
}

    return consCnt;
}
int main(){
    char str[50];
    printf("please enter a line: ");
    fgets(str, 50, stdin);
    printf("your enter line is: %s", str);

    printf("the number of vowles in this string is: %d \n",countVowles(str));
    printf("the number of the consonant in this string is: %d", countConsonant(str));
    return 0;
}
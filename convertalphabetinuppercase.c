#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    printf("enter a line: ");
    fgets(str , 50, stdin);
    printf("the line, that you entered is: %s", str);

    // convert all the letter in the uppercase one
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 97 && str[i] <= 97+26){
            str[i] = str[i] - 32;
        }
    }
    printf("after convert the new string is: ");
    puts(str);
    return 0;
}
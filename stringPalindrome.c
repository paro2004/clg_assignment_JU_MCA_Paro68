#include<stdio.h>
#include<string.h>

char* printReverse(char str[], char *rev){
    int len = strlen(str);

    int j = 0;
    for(int i = len - 1; i >= 0; i--){
        rev[j] = str[i];
        j++;
    }

    rev[j] = '\0';
    return rev;
}

void checkPalindrome(char str[], char *rev){
    int stringcompare = strcmp(str, rev);

    if(stringcompare == 0){
        printf(" string is palindrome \n");
    }
    else{
        printf(" string is not a palindrome \n");
    }
}

int main(){
    char str[50];
    char rev[50];   

    printf("please enter the string: ");
    fgets(str, 50, stdin);

    
    str[strcspn(str, "\n")] = '\0';   // str[index of '\n'] = '\0'

    printf("the string is: %s\n", str);
    printf("the reverse string is:\n");

    printReverse(str, rev);   
    printf("%s\n", rev);

    checkPalindrome(str, rev);
    return 0;
}

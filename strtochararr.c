//convert into character?
#include<stdio.h>

int strtochar(char str[], char arr[]){
    int i;
    for (i = 0; str[i]; i++)
    {
        arr[i] = str[i];
    }
    return i-1;
}

int main(){
    char str[30], charr[30];
    int i, upper;
    printf("Enter String\n");
    gets(str);
    upper = strtochar(str, charr);
    for (i = 0; i <= upper; i++)
    {
        printf("%c\n", charr[i]);
    }
    
    return 0;
}
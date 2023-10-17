//convert in uppercase
#include<stdio.h>

char* strUpper(char str[]){
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32; 
    }
    return str;
}

int main(){
    char str[30];
    printf("Enter a String\n");
    gets(str);
    printf("String Before Uppercase: %s\n", str);
    strUpper(str);
    printf("String After Uppercase: %s\n", str);
    return 0;
}
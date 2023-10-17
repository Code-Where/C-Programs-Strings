//Print each character in new line
#include<stdio.h>

int main(){
    char str[30];
    int  i = 0;
    printf("Enter a String\n");
    gets(str);
    printf("Printing each character in new line\n");
    while(str[i] != '\0')
    {
        printf("%c\n", str[i++]);
    } 
    return 0;
}
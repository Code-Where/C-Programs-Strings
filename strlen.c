//final length of the string ?
#include<stdio.h>

long strLength(char str[]){
    int len;
    for (len = 0; str[len] != '\0'; len++);
    return len;
}
int main(){
    char str[30];
    printf("Enter a String\n");
    gets(str);
    printf("Length of the given string is : %ld\n", strLength(str));
    return 0;
}
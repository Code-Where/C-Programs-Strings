//2 strings and print difference each character
#include<stdio.h>

int charDifference(char str1, char str2){
    return (str1 - str2);
}
int main(){
    char str[30], str2[30];
    int i;
    printf("Enter a String\n");
    gets(str);
    printf("Enter a another String\n");
    gets(str2);
    for (i = 0; str[i] && str2[i]; i++)
    {
        printf("%c - %c = %d\n", str[i], str2[i], charDifference(str[i], str2[i]));
    }
    
    return 0;
}
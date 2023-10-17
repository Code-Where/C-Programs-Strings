//count all vowels
#include<stdio.h>

long strVowels(char str[]){
    long count = 0, i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            count++;
    }
    
    return count;
}

int main(){
    char str[30];
    printf("Enter String\n");
    gets(str);
    printf("Total Vowels in given string is %d", strVowels(str));
    return 0;
}
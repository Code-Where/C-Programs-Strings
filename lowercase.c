//convert into lowercase
#include<stdio.h>

char* strLower(char str[]){
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32; 
    }
    return str;
}

int main(){
    char str[30];
    printf("Enter a String\n");
    gets(str);
    printf("String Before Lowercase: %s\n", str);
    strLower(str);
    printf("String After Lowercase: %s\n", str);
    return 0;
}
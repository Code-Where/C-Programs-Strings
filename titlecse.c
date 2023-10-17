//convert into title case
#include<stdio.h>

char* strtitle(char str[]){
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ' && (str[i+1] >= 'a' && str[i+1] <= 'z'))
            str[i+1] -= 32; 
        else if((i == 0 && (str[i] >= 'a' && str[i] <= 'z')))
            str[i] -= 32;
        
    }
    return str;
}

int main(){
    char str[30];
    printf("Enter a String\n");
    gets(str);
    printf("String Before Titlecase: %s\n", str);
    strtitle(str);
    printf("String After Titlecase: %s\n", str);
    return 0;
}
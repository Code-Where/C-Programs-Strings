//convert into toggle case
#include<stdio.h>

char* strToggle(char str[]){
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        else if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    return str;
}

int main(){
    char str[30];
    printf("Enter a String\n");
    gets(str);
    printf("String Before Togglecase: %s\n", str);
    strToggle(str);
    printf("String After Togglecase: %s\n", str);
    return 0;
}
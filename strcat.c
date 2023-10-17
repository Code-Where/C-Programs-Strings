//concatenate the string
#include<stdio.h>

char* strConcat(char firststr[], char secondstr[]){
    int str1len, i;
    for (str1len = 0; firststr[str1len] != '\0'; str1len++);

    for (i = 0; secondstr[i] != '\0'; i++)
    {
        firststr[str1len++] = secondstr[i]; 
    }
    firststr[str1len] = '\0';
    return firststr;
}

int main(){
    char str1[30], str2[30];
    printf("Enter first String\n");
    gets(str1);
    printf("Enter second String\n");
    gets(str2);
    // strConcat(str1, str2);
    printf("Concatinated String is %s\n", strConcat(str1, str2));
    return 0;
}
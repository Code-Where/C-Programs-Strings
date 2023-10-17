//compare two string
#include<stdio.h>

int strCompare(char firststr[], char secondstr[]){
    int i;
    for (i = 0; firststr[i] != '\0' && firststr[i] != '\0'; i++){
        if(firststr[i] != secondstr[i])
        {
            return 0;
        }
    }
    if (firststr[i] != '\0' || secondstr[i] != '\0'){
        return 0;
    }
    return 1;
}
int main(){
    char str1[30], str2[30];
    printf("Enter first String\n");
    gets(str1);
    printf("Enter second String\n");
    gets(str2);
    if (strCompare(str1, str2))
        printf("Strings are Equal\n");
    else
        printf("Strings are not equal\n");
    
    return 0;
}
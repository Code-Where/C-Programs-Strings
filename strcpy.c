//copy that string into another string ?
#include<stdio.h>

char* strCopy(char dest[], char src[]){
    int i;
    for (i = 0; src[i] != '\0'; i++){
        dest[i] = src[i];
    }
    dest[i] = src[i];
    return dest;
}

int main(){
    char str[30], copiedstr[30];
    printf("Enter String\n");
    gets(str);
    // strCopy(copiedstr, str);
    printf("Copied String is %s\n", strCopy(copiedstr, str));
    return 0;
}
//copy reverse order into another string
#include<stdio.h>

char* strrevcpy(char dest[], char src[]){
    int i = 0, j = 0;
    while(src[j] != '\0')
        j++;
    
    while(src[i] != '\0'){
        dest[i++] = src[--j];
    } 
    dest[i] = src[i]; 
    return dest;
}

int main(){
    char str[30], copiedstr[30];
    printf("Enter String\n");
    gets(str);
    // strrevcpy(copiedstr, str);
    printf("Copied String is %s\n", strrevcpy(copiedstr, str));
    return 0;
}
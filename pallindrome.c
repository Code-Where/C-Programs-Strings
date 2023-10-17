//check its palindrome or not
#include<stdio.h>

int isPallindrome(char str[]){
    int i = 0, j;
    for (j = 0; str[j] != '\0'; j++);
    while (i <= j)
    {
        if (str[i++] != str[--j])
        {
            return 0;
        }
    }
    if (i > j)
    {
        return 1;
    }
    return 0;
}

int main(){
    char str[30];
    printf("Enter String\n");
    gets(str);
    if(isPallindrome(str))
    {
        printf("Entered string is pallindrome\n");
    }
    else{
        printf("Entered string is not pallindrome\n");
    }
    
    return 0;
}
//enter a character if it is exist then print the bound number
#include<stdio.h>
#include<conio.h>

int search(char str[], char key){
    int i;
    for (i = 0; str[i]; i++)
    {
        if (key == str[i])
        {
            return i;
        }
    }
    return -1;  
}

int main(){
    char str[30];
    int index;
    printf("Enter String\n");
    gets(str);
    printf("Enter a character to find\n");
    index = search(str, getche());
    if (index == -1)
        printf("\nCharacter not found in given string\n");
    else
        printf("\n%c is found at bound number %d\n", str[index], index);
    
}
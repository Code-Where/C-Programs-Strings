//enter a character , it is exist or not
#include<stdio.h>
#include<conio.h>

int search(char str[], char key){
    int i;
    for (i = 0; str[i]!= '\0'; i++)
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
        printf("\n%c is found at %d position\n", str[index], index+1);
    
}
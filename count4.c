//count the number of characters, words, spaces and lines.
#include<stdio.h>

int main(){
    char str[30];
    int i, ch = 0, spaces = 0, words = 0, lines = 0;
    printf("Enter String\n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if(i == 0 && str[i] != ' '){
            words++;
        }
        else if(str[i] == ' ')
        {
            spaces++;
            if(str[i+1] != ' ' && str[i+1] != ' ')
            {
                words++;
            }
        }
        else if(str[i] == '\n')
        {
            lines++;
            if(str[i+1] != ' ' && str[i+1] != ' ')
            {
                words++;
            }
        }
        ch++;
    }
    printf("Number of Characters = %d\n", ch);
    printf("Number of Words = %d\n", words);
    printf("Number of Spaces = %d\n", spaces);
    printf("Number of Lines = %d\n", lines);
    return 0;
}
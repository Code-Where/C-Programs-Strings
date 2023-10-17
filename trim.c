//trim the spaces from both ends (if any)
#include<stdio.h>

int main(){
    int i,j;
    char str[30];

    printf("Enter String\n");
    gets(str);

    printf("%c", '(');
    printf("%s", str);
    printf("%c", ')');

    for (i = 0; str[i]; i++)
    {
        j=0;
        for (j = 0; str[i+j] == ' '; j++);
        if(str[i+j] == '\0')
        {
            str[i] = str[i+j];
            break;
        }
        else
            i = i+j;
        
    }
    printf("%c", '(');
    printf("%s", str);
    printf("%c", ')');
    return 0;
}
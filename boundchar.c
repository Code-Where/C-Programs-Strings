// enter a character if it is exist then print the bound number
#include<stdio.h>

char charatbound(char str[], int bound){
    int i;
    for (i = 0; str[i] != '\0'; i++);
    if (bound > i-1 || bound < 0)
    {
        return '\0';
    }
    return str[bound];
}
int main(){
    char str[30], ch;
    int bound;
    printf("Enter a String\n");
    gets(str);
    printf("Enter bound number\n");
    scanf("%d", &bound);
    ch = charatbound(str, bound);
    if (ch == '\0')
        printf("Invalid Bound Number\n");
    else
        printf("%c is at bound no %d\n", ch, bound);
    
    return 0;
}
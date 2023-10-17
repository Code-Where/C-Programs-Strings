//convert characters into string. [for example take 10 characters]
#include<stdio.h>
#include<conio.h>

int main(){
    char str[11];
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter any Character: \t");
        str[i] = getche();
        printf("\n");
    }
    str[i] = '\0'; //For Converting character array to string
    printf("\nThe string is : %s", str);
    return 0;
}
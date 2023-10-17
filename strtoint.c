//convert into integer?
#include<stdio.h>

long strtoint(char str[]){
    long num = 0, i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            num = (num*10) + (str[i] - 48);
        else if(str[i] == '.'){
            break;
        }
    }
    if(str[0] == '-')
        num *= -1;
    
    return num;
}

int main(){
    char str[30];
    printf("Enter String\n");
    gets(str);
    printf("String in integer is %d", strtoint(str));
    return 0;
}
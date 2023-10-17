//convert into float?
#include<stdio.h>

float strtofloat(char str[]){
    int i;
    float num = 0.0, decimalPlace = 1.0;
    for (i = 0; str[i] != '\0'; i++)
    {
        decimalPlace *= 10;
        if (str[i] >= '0' && str[i] <= '9'){
            num = (num*10.0) + (str[i] - 48);
            printf("%f\n", num);
        }
        else if(str[i] == '.'){
            decimalPlace = 1;
        }
    }
    while(decimalPlace < 100000)
    {
        decimalPlace *= 10;
        num = (num*10.0) + 0.0;
    }
    return (num/decimalPlace);
}

int main(){
    char str[30];
    printf("Enter String\n");
    gets(str);
    printf("String in integer is %f", strtofloat(str));
    return 0;
}
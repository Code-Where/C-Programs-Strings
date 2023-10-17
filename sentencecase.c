//convert into sentence case
#include<stdio.h>

char* strSentence(char str[]){
    int i;
    for (i = 0; str[i] != '\0'; i++){
        if( (i==0) && (str[i]>='a' && str[i]<='z')){
			str[i] -= 32;
		}
		else if(str[i]=='.')
		{
			if(str[i+1] == ' ')
			{
				if(str[i+2]>='a' && str[i+2]<='z')
				{
					str[i+2] -= 32;
				}
			}
			else
			{         
				if(str[i+1]>='a' && str[i+1]<='z')
				{
					str[i+1] -= 32;
				}
			}
		}
	}
    return str;
}

int main(){
    char str[30];
    printf("Enter a String\n");
    gets(str);
    printf("String Before Sentence Case: %s\n", str);
    strSentence(str);
    printf("String After Sentence Case: %s\n", str);
    return 0;
}
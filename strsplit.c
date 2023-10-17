//create a split function which splits the first word and return. split(string,index)
#include<stdio.h>
#include<stdlib.h>

long strLength(char str[]){
    int len;
    for (len = 0; str[len] != '\0'; len++);
    return len;
}

char* split(char string[], int index) {
    int i;
    if (index < 0 || index >= strLength(string)) {
        printf("Invalid index.\n");
        return NULL;
    }

    char* first_part = (char*)malloc((index + 1) * sizeof(char)); 
    if (first_part == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    for (i = 0; i < index; i++) {
        first_part[i] = string[i];
    }

    first_part[i] = '\0';  

    return first_part;
}

int main(){
    char str[30];
    int ind;
    printf("Enter a String\n");
    gets(str);
    printf("Enter index where to split\n");
    scanf("%d", &ind);
    char* word =  split(str, ind);
    printf("Splitted Word is %s\n", word);
    free(word);
    return 0;
}
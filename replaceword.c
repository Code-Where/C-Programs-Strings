//enter a sentence from user and then enter the word and replace that word by another word.
#include<stdio.h>

long strLength(char str[]){
    int len;
    for (len = 0; str[len] != '\0'; len++);
    return len;
}
char* strCopy(char dest[], char src[]){
    int i;
    for (i = 0; src[i] != '\0'; i++){
        dest[i] = src[i];
    }
    dest[i] = src[i];
    return dest;
}
char* replaceWord(char str[], char word[], char replacement[]){
    int i, j, strlen, wordlen, ind;
    strlen = strLength(str);
    wordlen = strLength(word);
    char newstr[30];

    for (i = 0; i <= strlen; i++) {
        int match = 1;

        for (j = 0; j < wordlen; j++) {
            if (str[i + j] != word[j]) {
                match = 0;
                break;
            }
        }

        if (match) {
            for (int j = 0; replacement[j]; j++) {
                newstr[ind] = replacement[j];
                ind++;
            }
            i += wordlen - 1;  
        } else {
            newstr[ind] = str[i];
            ind++;
        }
    }
    strCopy(str, newstr);
}

int main(){
    char str[30], word[10], replace[10];
    printf("Enter Sentence\n");
    gets(str);
    printf("Enter word to be replaced\n");
    gets(word);
    printf("Enter Replacement word\n");
    gets(replace);
    replaceWord(str, word, replace);
    printf("Replaced String is \n");
    printf("%s", str);
    return 0;
}
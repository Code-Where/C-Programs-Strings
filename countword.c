//enter a sentence from user and then enter the word and count the occurence of that word in the sentence.
#include<stdio.h>

long strLength(char str[]){
    int len;
    for (len = 0; str[len] != '\0'; len++);
    return len;
}

long countWord(char str[], char word[]){
    int i, j, strlen, wordlen, count = 0;
    strlen = strLength(str);
    wordlen = strLength(word);
    
    for (i = 0; i <= strlen - wordlen; i++) {
        int match = 1;

        for (j = 0; j < wordlen; j++) {
            if (str[i + j] != word[j]) {
                match = 0;
                break;
            }
        }

        if (match) {
            count++;
            i += wordlen - 1;  
        }
    }
    return count;
}

int main(){
    char str[30], word[10];
    printf("Enter Sentence\n");
    gets(str);
    printf("Enter word to be search\n");
    gets(word);
    printf("%s present %ld times", word, countWord(str, word));
    return 0;
}
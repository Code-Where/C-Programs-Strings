// display the string with text alignment option (1 for left, 2 for center, 3 right)
#include <stdio.h>
#include <string.h>

void displayAlignedText(char text[], int alignment) {
    int length = strlen(text);

    if (alignment == 1) {
        printf("%s\n", text); 
    } else if (alignment == 2) {
        int spaces = (80 - length) / 2; 
        for (int i = 0; i < spaces; i++) {
            printf(" ");
        }
        printf("%s\n", text);
    } else if (alignment == 3) {
        int spaces = 80 - length;  
        for (int i = 0; i < spaces; i++) {
            printf(" ");
        }
        printf("%s\n", text);
    } else {
        printf("Invalid alignment option.\n");
    }
}

int main() {
    char text[] = "Hello, World!";
    int alignment;

    printf("Enter alignment option (1 for left, 2 for center, 3 for right): ");
    scanf("%d", &alignment);

    displayAlignedText(text, alignment);

    return 0;
}

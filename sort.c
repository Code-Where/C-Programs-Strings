//sort the string in ascending order.
#include <stdio.h>

char *strsort(char str[])
{
    char temp;
    int i, j;
    for (i = 0; str[i]; i++)
    {
        for (j = i+1; str[j]; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
        if (str[i + 2] == '\0')
            break;
    }

    return str;
}
int main()
{
    char str[30];
    printf("Enter a String\n");
    gets(str);
    printf("Sorted String: %s", strsort(str));
    return 0;
}
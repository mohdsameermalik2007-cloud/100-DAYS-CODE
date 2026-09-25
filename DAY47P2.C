//Q94. Find the longest word in a sentence.

#include <stdio.h>

int main()
{
    char str[200], word[100], longest[100];
    int i = 0, j = 0, len = 0, maxLen = 0;

    fgets(str, sizeof(str), stdin);

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            word[j++] = str[i];
            len++;
        }
        else
        {
            if (len > maxLen)
            {
                maxLen = len;
                word[j] = '\0';

                for (int k = 0; k <= j; k++)
                {
                    longest[k] = word[k];
                }
            }

            j = 0;
            len = 0;

            if (str[i] == '\0')
                break;
        }

        i++;
    }

    printf("%s", longest);

    return 0;
}
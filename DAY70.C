// Q120: Write a program to take a string input. Change it to sentence case.

#include <stdio.h>

int main(void)
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (i != 0 && str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("Sentence case: %s", str);

    return 0;
}
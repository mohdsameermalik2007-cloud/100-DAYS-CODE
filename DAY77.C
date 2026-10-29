//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.


#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *input, *output;
    char ch;

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    if (input == NULL)
    {
        printf("Error opening input.txt");
        return 1;
    }

    if (output == NULL)
    {
        printf("Error opening output.txt");
        fclose(input);
        return 1;
    }

    while ((ch = fgetc(input)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch, output);
    }

    fclose(input);
    fclose(output);

    printf("Text converted to uppercase successfully.");

    return 0;
}
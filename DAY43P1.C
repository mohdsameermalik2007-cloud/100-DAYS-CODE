// Q85: Reverse a string.

#include <stdio.h>
int main() {
    char str[100];
    int i, length =0;

    printf("enter a string: ");
    scanf("%s", str);

    // find length of string
    while (str[length] != '\0') {
        length++;
    }

    // print string in reverse
    printf("reversed string: ");
    for (i = length -1; i >=0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
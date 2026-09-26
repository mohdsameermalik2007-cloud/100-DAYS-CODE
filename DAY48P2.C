// Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, start = 0, end, j;
    char temp;

    printf("Enter a sentence: ");
    fgets(str, 100, stdin);

    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            end = i - 1;

            for (j = start; j < end; j++, end--) {
                temp = str[j];
                str[j] = str[end];
                str[end] = temp;
            }

            start = i + 1;

            if (str[i] == '\n' || str[i] == '\0')
                break;
        }
    }

    printf("Output: %s", str);

    return 0;
}
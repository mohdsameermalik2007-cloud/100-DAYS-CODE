// Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>

int main() {
    char name[100];
    int i, last = 0;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            printf("%c. ", name[last]);
            last = i + 1;
        }
    }

    printf("%s", &name[last]);

    return 0;
}
//Q97: Print the initials of a name.

#include <stdio.h>

int main() {
    char name[100];
    int i;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: %c", name[0]);

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c", name[i + 1]);
        }
    }

    return 0;
}
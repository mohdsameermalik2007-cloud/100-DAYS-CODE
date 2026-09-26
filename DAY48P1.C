// Q95: Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], temp[200];

    printf("Enter first string: ");
    scanf("%s", a);

    printf("Enter second string: ");
    scanf("%s", b);

    if (strlen(a) != strlen(b)) {
        printf("Not a rotation");
        return 0;
    }

    strcpy(temp, a);
    strcat(temp, a);

    if (strstr(temp, b))
        printf("Rotation");
    else
        printf("Not a rotation");

    return 0;
}
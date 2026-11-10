// Q139: Show that enums store integers by printing assigned values.

#include <stdio.h>

enum Numbers {
    FIRST = 10,
    SECOND = 20,
    THIRD = 30
};

int main() {
    enum Numbers n1 = FIRST;
    enum Numbers n2 = SECOND;
    enum Numbers n3 = THIRD;

    printf("FIRST = %d\n", n1);
    printf("SECOND = %d\n", n2);
    printf("THIRD = %d\n", n3);

    return 0;
}
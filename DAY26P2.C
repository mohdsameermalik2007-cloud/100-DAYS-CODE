// Q52: Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *



#include <stdio.h>
int main() {
    int i, j; 
    int rows[] = {1, 3, 5, 3, 1};

    for (i =0; i < 5; i++) {
        for (j =0; j < rows[i]; j++) {
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}
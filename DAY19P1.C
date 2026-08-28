// Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    lcm = (a > b) ? a : b;

    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            break;
        }
        lcm++;
    }

    printf("LCM = %d", lcm);

    return 0;
}
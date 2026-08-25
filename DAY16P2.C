// Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>

int main () {
    int n, original, reverse = 0, remainder;

    printf("enter a number: ");
    scanf("%d", &n);

    original = n;
    while (n > 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    if (original == reverse) {
        printf("palindrome");
    } else {
        printf("not palindrome");
    }

    return 0;
}
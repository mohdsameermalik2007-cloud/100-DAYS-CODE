// Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int n, first, last, digits = 1, temp, swapped;

    printf("enter a nummber: ");
    scanf("%d", &n);

    last = n % 10;
    temp = n;

    while (temp >= 10) {
        temp /= 10;
        digits *= 10;
    }

    first = temp;

    swapped = last * digits + (n % digits - last) + first;

    printf("number after swapping first and last digit = %d", swapped);

    return 0;
}
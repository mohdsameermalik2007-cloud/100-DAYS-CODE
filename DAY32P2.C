// Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long long n;
    int count[10] = {0};
    int digit, maxDigit = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    if (n < 0)
        n = -n;

    if (n == 0)
        count[0] = 1;

    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (int i = 1; i < 10; i++) {
        if (count[i] > count[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("Most occurring digit = %d\n", maxDigit);
    printf("Number of times = %d\n", count[maxDigit]);

    return 0;
}
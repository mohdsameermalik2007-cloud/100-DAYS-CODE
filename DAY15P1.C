// Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>
int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("enter a number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("factorial of %d = %llu", n, factorial);

    return 0;

}
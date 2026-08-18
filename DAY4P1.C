// Q7: Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main() {
    int a, b;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    a = a+b;
    b = a-b;
    a = a-b;

    printf("after swapping: a = %d, b = %d\n", a, b);
    return 0;
}
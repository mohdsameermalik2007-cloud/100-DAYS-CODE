// Q43: Write a program to check if a number is a strong number.

#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
        return fact;
}

int main()
{
    int n, temp, digit, sum = 0;

    printf("enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    
    }

    if (sum == n)
        printf("%d is a storng number.", n);
    else
        printf("%d is not a storng number.", n);
    return 0;    
            
}
// Q69: Find the second largest element in an array.

#include <stdio.h>

int main() {
    int a[100], n, largest, second;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    largest = second = -99999;

    for (int i = 0; i < n; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
        }
        else if (a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }

    printf("Second largest = %d", second);

    return 0;
}
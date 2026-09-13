// Q70: Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int a[100], n, k, temp;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    k = k % n;

    for (int j = 0; j < k; j++) {
        temp = a[n - 1];

        for (int i = n - 1; i > 0; i--)
            a[i] = a[i - 1];

        a[0] = temp;
    }

    printf("Rotated array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
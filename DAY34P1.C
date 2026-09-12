// Q67: Insert an element in an array at a given position.

#include <stdio.h>

int main()
{
    int a[100], n, pos, value, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &value);

    // Shift elements to the right
    for(i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }

    // Insert element
    a[pos - 1] = value;
    n++;

    printf("Array after insertion: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
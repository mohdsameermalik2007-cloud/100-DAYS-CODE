// Q77: Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int n, a[10][10], flag = 0;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &a[i][j]);

    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(a[i][i] == a[j][j])
                flag = 1;

    if(flag == 0)
        printf("Distinct");
    else
        printf("Not Distinct");

    return 0;
}
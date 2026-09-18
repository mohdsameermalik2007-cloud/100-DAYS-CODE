// Q79: Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int n, m, a[10][10];
    scanf("%d%d", &n, &m);

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%d", &a[i][j]);

    for(int k=0; k<n+m-1; k++)
        for(int i=0; i<n; i++) {
            int j = k-i;
            if(j>=0 && j<m)
                printf("%d ", a[i][j]);
        }

    return 0;
}
// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main()
{
    int dd, yyyy;

    printf("Enter day: ");
    scanf("%d", &dd);

    printf("Enter year: ");
    scanf("%d", &yyyy);

    printf("%02d-Apr-%d", dd, yyyy);

    return 0;
}
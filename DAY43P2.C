// Q86: Check if a string is a palindrome.

#include <stdio.h>
int main() {
    char str[100];
    int i, length =0, flag =1;

    printf("enter a string: ");
    scanf("%s", str);

    // find length
    while (str[length] !='\0') {
        length++;
    }

    // check palindrome
    for(i=0;i<length/2;i++) {
        if (str[i] != str[length - 1 -i]) {
            flag =0;
            break;
        }
    }

    if (flag == 1 )
       printf("string is a palindrome. ");
       else
           printf("string is not a palindrome. ");

           return 0;
}
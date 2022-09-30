// That accepts a string, check for Palindrome and returns True or False respectively.

#include <stdio.h>
#include <string.h>

int String_palindrome(char check[])
{
    int length=0,i=0;
    length = strlen(check);
    while (length != (length / 2))
    {
        if (check[length - 1] != check[i])
            return 0;
        ++i;
        --length;
    }
    return 1;
}

int main()
{
    char string[100];
    int ans;
    printf("Enter the string: ");
    scanf("%s", string);
    ans = String_palindrome(string);
    if (ans == 0)
        printf("The string is not a palindrome.");
    else
        printf("The string is a palindrome.");
}

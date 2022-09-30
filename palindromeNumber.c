// To check whether a number is palindrome or not and returns True or False
// respectively

#include <stdio.h>

void pal(int n){
    int r, sum = 0, temp;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
        printf("palindrome number ");
    else
        printf("not palindrome");
}
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    pal(n);
    
    return 0;
}

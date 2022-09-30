// To check whether a number is Prime number or not.

#include <stdio.h>

void prime(int n)
{
    int factors = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            factors += 1;
    }

    if (factors == 0 || n == 2)
        printf("%d is a prime number.", n);
    else
        printf("%d is a composite number.", n);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    prime(num);
    return 0;
}

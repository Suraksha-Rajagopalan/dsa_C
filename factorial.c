// To calculate the factorial of a number (a non-negative integer). Pass the integer as an
// argument and return the factorial.

#include <stdio.h>

int factorial(int n){
    if (n==1 || n==0)
        return 1;
    else
        return n*factorial(n-1);
}

int main(){
    int num, ans;
    printf("Enter a number: ");
    scanf("%d", &num);
    ans = factorial(num);
    printf("The factorial of %d is %d", num, ans);
}

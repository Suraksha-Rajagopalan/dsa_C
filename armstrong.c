// Write a C program to check whether a number is Armstrong number or not.

#include <stdio.h>

int main(){
    int num, n, sum, x;
    printf("Enter a num: ");
    scanf("%d",&num);
    x = num;
    while(num!=0){
        n = num%10;
        sum+=(n*n*n);
        num/=10;
    }
    if (sum == x)
        printf("%d is an amstrong number",x);
    else
        printf("%d is not an amstrong number",x);
    return 0;
}

// Write a C program to find sum of all even numbers between 1 to n.

#include <stdio.h>

int main(){
    int num, sum;
    printf("Enter the number n: ");
    scanf("%d", &num);
    for (int i=0; i<num; i++){
        if (i%2==0)
            sum+=i;
    }
    printf("The sum of n numbers is: %d", sum);
    return 0;
}

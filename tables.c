// Write a C program to print multiplication table of a given number.

#include <stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 1; i<11; i++){
        printf("%d x %d = %d\n", num, i, num*i);
    }
    return 0;
}

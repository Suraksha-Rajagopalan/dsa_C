#include <stdio.h>

int main(){
    int arr[10];
    double sum = 0;
    for (int i = 0; i<10; i++){
        printf("Enter the element at position %d: ", i);
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("The sum of all numbers in the array is: %lf", sum/10.0);
    return 0;
}

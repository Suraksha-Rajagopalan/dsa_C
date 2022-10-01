#include <stdio.h>

int main(){
    int arr[10];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i<10; i++){
        scanf("%d", &arr[i]);
    }
    printf("The elements of the array after deleting the elements in the even indices is: \n");
    for (int j=0; j<10; j++){
        if (j%2==0){
            arr[j] = 0;
        }
        printf("%d  ",arr[j]);
    }
    return 0;
}

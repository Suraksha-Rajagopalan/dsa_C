#include <stdio.h>

int main(){
    int arr[10];
    int temp;
    for(int i = 0; i<10; i++){
        printf("Enter the element at position %d: ", i);
        scanf("%d",&arr[i]);
    }
    printf("Duplicate elements in given array: \n");      
    for(int i = 0; i < 10; i++) {    
        for(int j = i + 1; j < 10; j++) {    
            if(arr[i] == arr[j])    
                printf("%d\n", arr[j]);    
        }    
    }    
    return 0;    

}

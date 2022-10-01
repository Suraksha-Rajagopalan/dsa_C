
void elements(int arr[10]){
    for(int i = 0; i<10; i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[10];
    int temp;
    for(int i = 0; i<10; i++){
        printf("Enter the element at position %d: ", i);
        scanf("%d",&arr[i]);
    }
    printf("The array entered is : ");
    elements(arr);
    temp = arr[0];
    arr[0] = arr[9];
    arr[9] = temp;
    printf("\n");
    printf("The array after the modification is : ");
    elements(arr);
    return 0;
}

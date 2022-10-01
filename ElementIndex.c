#include <stdio.h>

int main()
{
    int num;
    printf("Enter the size of the array: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the array elements: \n");
    for (int i = 0; i < num; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < num; i++)
        if (arr[i] == i)
            printf("The element-index pair is: (%d,%d)\n", arr[i], i);
    return 0;
}

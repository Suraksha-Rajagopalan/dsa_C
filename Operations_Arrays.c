// Write a C program that uses functions to perform the following o
// a. Creation
// b. Insertion (at start, at end, using index, based on value)
// c. Deletion (at start, at end, using index, based on value)
// d. Traversal
// e. Searching an element. (based on value, based on index)

#include <stdio.h>
void create_array(int arr[], int n)
{
    for (int i=0;i<n;i++)
    {
        printf("Enter arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
}
void insert_number( int st, int n, int arr[],int index, int val)
{
    printf("After inserting a number in the array: ");
    if (index>=0&&index <= n)
    {
        for (int i=n;i>index;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[index]=val;
    }
    for (int i=0;i<n+1;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void delete_number(int arr[], int st, int end, int index)
{
    printf("After deleting the number from array: ");
    if (index >= 0 && index <= end)
    {
        for (int i = 0; i < end - 1; i++)
        {
            if(i>=index&&i!=end-1)
            {
                arr[i]=arr[i+1];
            }
            //arr[i] = arr[i + 1];
        }
        arr[end-1]='\0';
    }
    for (int i=0;i<end-1;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void traversal(int arr[], int n)
{
    printf("Traversing array: ");
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void Search_number(int arr[50], int val, int index)
{
    if (arr[index]==val)
    {
        printf("The number %d is present at index %d",val,index);
    }
    else
    {
        printf("The number %d is not present at index %d",val,index);
    }
}
int main()
{
    
    int n,i1,val1,i2,i3,val3;
    printf("Size of array: ");
    scanf("%d",&n);
    int arr[n];
    create_array(arr, n);
    printf("Enter the index and the number to be inserted ");
    scanf("%d %d",&i1,&val1);
    insert_number(0, n, arr, i1, val1);
    printf("Enter the index for the number to be deleted ");
    scanf("%d",&i2);
    delete_number(arr, 0, n+1, i2);
    traversal(arr, n);
    printf("\nEnter the number to be searched and the index ");
    scanf("%d %d",&val3,&i3);
    Search_number(arr, val3, i3);
    return 0;
}

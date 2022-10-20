// Quick sort in C

#include <stdio.h>

// function to Swap elements
void Swapnumbers(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

// function to find the partition position
int partition(int array[], int low, int high) {
  
  // select the rightmost element as pivot
  int pivot = array[high];
  
  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      // if element smaller than pivot is found
      // Swap it with the greater element pointed by i
      i++;
      
      // Swap element at i with element at j
      Swapnumbers(&array[i], &array[j]);
    }
  }

  // Swap the pivot element with the greater element at i
  Swapnumbers(&array[i + 1], &array[high]);
  
  // return the partition point
  return (i + 1);
}

void QuickSort(int array[], int low, int high) {
  if (low < high) {
    
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on right of pivot
    int pi = partition(array, low, high);
    
    // recursive call on the left of pivot
    QuickSort(array, low, pi - 1);
    
    // recursive call on the right of pivot
    QuickSort(array, pi + 1, high);
  }
}

// function to print array elements
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// main function
int main() {
  int data[] = {8, 7, 2, 1, 0, 9, 6};
  
  int n = sizeof(data) / sizeof(data[0]);
  
  printf("Original(Unsorted) Array\n");
  printArray(data, n);
  
  // perform quicksort on data
  QuickSort(data, 0, n - 1);
  
  printf("Sorted array in ascending order: \n");
  printArray(data, n);
}

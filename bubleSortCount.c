// Maksim Petrushin
// bubble sort for each index counter
// 07.07.2023
#include <stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
// A function to implement bubble sort
// A function to implement bubble sort

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void bubbleSort(int arr[], int n, int *count)
{
    for (int i=0; i<n;i++){
        count[i]=0;
    }
    printf("\nUsing Bubble sort\n\n");

    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        
        for (j = 0; j < n - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            { // then swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                count[j]++;
                count[j+1]++;
            }
            
        }
    }
}

// Driver program to test above functions
int main()
{
    int arr[] = {97,  16,  45,  63,  13,  22,  7,  58,  72};

    int n = 9; // size of the array

    printf("Array bofore sorting: \n");
    printArray(arr, n);

    int count[n];
    bubbleSort(arr, n, count);
    printf("Sorted array: \n");
    printArray(arr, n);
    printf("\n");
    printf("Number of swaps: \n");
    for(int i=0;i<n;i++){
        printf("%d ", count[i]);
    }
    printf("\n");
    return 0;
}

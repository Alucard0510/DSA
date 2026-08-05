/*
------------------------------------------------------------
Algorithm : Quick Sort
Language  : C++
Author    : Harsh Pandey

Description:
Quick Sort is a Divide and Conquer algorithm. It selects a
pivot element, places it in its correct position, and
partitions the remaining elements into two groups:
elements smaller than the pivot and elements greater than
the pivot. The same process is applied recursively.

Algorithm Steps:
1. Choose a pivot.
2. Partition the array around the pivot.
3. Recursively sort the left subarray.
4. Recursively sort the right subarray.

Time Complexity:
Best Case    : O(n log n)
Average Case : O(n log n)
Worst Case   : O(n²)

Space Complexity:
Average : O(log n)
Worst   : O(n)

Stable:
No

In-place:
Yes

Applications:
- General-purpose sorting
- Large arrays
- Competitive Programming

------------------------------------------------------------
*/
#include <iostream>
using namespace std;

int partition(int arr[], int start, int end){
    int ptr = start-1;
    int min = arr[end];
    for(int j = start; j<=end; j++){
        if(arr[j]<min){
            ptr++;
            swap(arr[j], arr[ptr]);
        }
    }
    ptr++;
    swap(arr[ptr], arr[end]);
    return ptr;
}

void quickSort(int arr[], int start, int end){
    if(start<end){
    int pivotIndex = partition(arr, start, end);
    quickSort(arr, start, pivotIndex-1);
    quickSort(arr, pivotIndex+1, end);
    }
}

void display (int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main () {
    int arr[] = {23,45,12,75,98,20,79,65,87,10,43};
    int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0, end = size-1;

    display(arr, size);
    quickSort(arr, start, end);
    display(arr, size);
    
    return 0;
}
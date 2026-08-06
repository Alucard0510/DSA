/*
------------------------------------------------------------
Algorithm : Bubble Sort
Language  : C++
Author    : Harsh Pandey

Description:
Bubble Sort is a simple comparison-based sorting algorithm.
It repeatedly compares adjacent elements and swaps them if
they are in the wrong order. After each pass, the largest
unsorted element "bubbles" to its correct position at the end
of the array.

Key Idea:
After every pass, the largest unsorted element reaches
its correct position by repeatedly swapping adjacent
elements that are out of order.

Algorithm Steps:
1. Compare each pair of adjacent elements.
2. Swap them if they are in the wrong order.
3. Repeat the process for the remaining unsorted part.
4. Stop when no swaps are performed in a pass (optimized version).

Time Complexity:
Best Case    : O(n)      // Already sorted (Optimized Bubble Sort)
Average Case : O(n²)
Worst Case   : O(n²)

Space Complexity:
O(1)

Stable:
Yes

In-place:
Yes

Applications:
- Educational purposes
- Detecting whether a list is already sorted (optimized version)
- Suitable only for very small datasets

------------------------------------------------------------
*/
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }   
        }
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
    int size = sizeof(arr)/sizeof(int);
    display(arr, size);
    bubbleSort(arr, size);
    display(arr, size);
    return 0;
}
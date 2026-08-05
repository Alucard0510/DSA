/*
------------------------------------------------------------
Algorithm : Merge Sort
Language  : C++
Author    : Harsh Pandey

Description:
Merge Sort is a Divide and Conquer algorithm. It recursively
divides the array into two halves until each subarray contains
only one element. The sorted subarrays are then merged to
produce the final sorted array.

Algorithm Steps:
1. Divide the array into two halves.
2. Recursively sort the left half.
3. Recursively sort the right half.
4. Merge the two sorted halves.

Time Complexity:
Best Case    : O(n log n)
Average Case : O(n log n)
Worst Case   : O(n log n)

Space Complexity:
O(n)

Stable:
Yes

In-place:
No

Applications:
- External Sorting
- Linked List Sorting
- Stable Sorting
- Large Dataset Processing

------------------------------------------------------------
*/
#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int start, int mid, int end){
    int i = start, j = mid+1;
    vector<int> temp;
    while (i<=mid && j<=end) {
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i<=mid) {
        temp.push_back(arr[i]);
        i++;
    }
    while (j<=end) {
        temp.push_back(arr[j]);
        j++;
    }
    for(int i = 0; i < temp.size(); i++){
        arr[i+start] = temp[i];
    }
}

void mergeSort(int arr[], int start, int end){
    if(start>=end){
        return;
    }
    int mid = start + (end-start)/2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, start, mid, end);
};

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
    mergeSort(arr, start, end);
    display(arr, size); 
    return 0;
}